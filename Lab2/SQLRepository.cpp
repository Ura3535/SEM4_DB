#include "SQLRepository.h"
#include "Logger.h"

using namespace Repository;
using namespace Logging;

SQLRepository::SQLRepository()
    : builder(gcnew SqlConnectionStringBuilder())
{
    builder->DataSource = "DESKTOP-LGFLGFJ\\SQLEXPRESS";
    builder->InitialCatalog = "DBPostOffice";
    builder->IntegratedSecurity = true;
    builder->TrustServerCertificate = true;

    connection = gcnew SqlConnection(builder->ToString());
}

void SQLRepository::Add(Table table, Entity^ obj)
{
    switch (table)
    {
    case Table::Clients:
        text = "INSERT INTO dbo.Clients(Name, ContactNumber, Email)"
            + " VALUES(@Name, @ContactNumber, @Email)";
        break;
    case Table::Couriers:
        text = "INSERT INTO dbo.Couriers(Name, City, ParcelId)"
            + " VALUES(@Name, @City, @ParcelId)";
        break;
    case Table::FacilityTypes:
        text = "INSERT INTO dbo.FacilityTypes(Type)"
            + " VALUES(@Type)";
        break;
    case Table::Parcels:
        text = "INSERT INTO dbo.Parcels(Info, Weight, SenderId, ReciverId, DeparturePointsId, DeliveryPointsId, Price, StatusId, CurrentLocationId, DeliveryAddress)"
            + " VALUES(@Info, @Weight, @SenderId, @ReciverId, @DeparturePointsId, @DeliveryPointsId, @Price, @StatusId, @CurrentLocationId, @DeliveryAddress)";
        break;
    case Table::ParcelStatuses:
        text = "INSERT INTO dbo.ParcelStatuses(Status)"
            + " VALUES(@Status)";
        break;
    case Table::PostalFacilitys:
        text = "INSERT INTO dbo.PostalFacilitys(Name, FacilityTypeId, Address, WorkSchedule, WeightRestrictions)"
            + " VALUES(@Name, @FacilityTypeId, @Address, @WorkSchedule, @WeightRestrictions)";
        break;
    default:
        break;
    }
    Execute(text, GetCommandParameters(table, obj, false));
}

Entity^ SQLRepository::Get(Table table, long Id)
{
    List<KeyValuePair<String^, Object^>>^ params = gcnew List<KeyValuePair<String^, Object^>>;
    params->Add(KeyValuePair<String^, Object^>("@Id", Id));

    switch (table)
    {
    case Table::Clients:
        text = "SELECT * FROM dbo.Clients WHERE Id = @Id";
        break;
    case Table::Couriers:
        text = "SELECT * FROM dbo.Couriers WHERE Id = @Id";
        break;
    case Table::FacilityTypes:
        text = "SELECT * FROM dbo.FacilityTypes WHERE Id = @Id";
        break;
    case Table::Parcels:
        text = "SELECT * FROM dbo.Parcels WHERE Id = @Id";
        break;
    case Table::ParcelStatuses:
        text = "SELECT * FROM dbo.ParcelStatuses WHERE Id = @Id";
        break;
    case Table::PostalFacilitys:
        text = "SELECT * FROM dbo.PostalFacilitys WHERE Id = @Id";
        break;
    default: break;
    }

    connection->Open();
    Entity^ res = ReadFromReader(table, ExecuteReader(text, params));
    connection->Close();

    return res;
}

List<Entity^>^ SQLRepository::GetAll(Table table)
{
    List<KeyValuePair<String^, Object^>>^ params = gcnew List<KeyValuePair<String^, Object^>>;

    switch (table)
    {
    case Table::Clients:
        text = "SELECT * FROM dbo.Clients";
        break;
    case Table::Couriers:
        text = "SELECT * FROM dbo.Couriers";
        break;
    case Table::FacilityTypes:
        text = "SELECT * FROM dbo.FacilityTypes";
        break;
    case Table::Parcels:
        text = "SELECT * FROM dbo.Parcels";
        break;
    case Table::ParcelStatuses:
        text = "SELECT * FROM dbo.ParcelStatuses";
        break;
    case Table::PostalFacilitys:
        text = "SELECT * FROM dbo.PostalFacilitys";
        break;
    default: break;
    }

    connection->Open();
    SqlDataReader^ reader = ExecuteReader(text, params);
    List<Entity^>^ res = gcnew List<Entity^>();
    Entity^ item = ReadFromReader(table, reader);
    while (item != nullptr) {
        res->Add(item);
        item = ReadFromReader(table, reader);
    }
    connection->Close();

    return res;
}

void SQLRepository::Update(Table table, Entity^ obj)
{
    switch (table)
    {
    case Table::Clients:
        text = "UPDATE dbo.Clients SET "
            + "Name = @Name, "
            + "ContactNumber = @ContactNumber, "
            + "Email = @Email "
            + "WHERE Id = @Id";
        break;
    case Table::Couriers:
        text = "UPDATE dbo.Couriers SET "
            + "Name = @Name, "
            + "City = @City, "
            + "ParcelId = @ParcelId "
            + "WHERE Id = @Id";
        break;
    case Table::FacilityTypes:
        text = "UPDATE dbo.FacilityTypes SET "
            + "Type = @Type "
            + "WHERE Id = @Id";
        break;
    case Table::Parcels:
        text = "UPDATE dbo.Parcels SET "
            + "Info = @Info, "
            + "Weight = @Weight, "
            + "SenderId = @SenderId, "
            + "ReciverId = @ReciverId, "
            + "DeparturePointsId = @DeparturePointsId, "
            + "DeliveryPointsId = @DeliveryPointsId, "
            + "Price = @Price, "
            + "StatusId = '@StatusId', "
            + "CurrentLocationId = @CurrentLocationId, "
            + "DeliveryAddress = @DeliveryAddress "
            + "WHERE Id = @Id";
        break;
    case Table::ParcelStatuses:
        text = "UPDATE dbo.ParcelStatuses SET "
            + "Status = @Status "
            + "WHERE Id = @Id";
        break;
    case Table::PostalFacilitys:
        text = "UPDATE dbo.PostalFacilitys SET "
            + "Name = @Name, "
            + "FacilityTypeId = @FacilityTypeId, "
            + "Address = @Address, "
            + "WorkSchedule = @WorkSchedule, "
            + "WeightRestrictions = @WeightRestrictions "
            + "WHERE Id = @Id";
        break;
    default: break;
    }
    Execute(text, GetCommandParameters(table, obj, true));
}

void SQLRepository::Delete(Table table, long Id)
{
    List<KeyValuePair<String^, Object^>>^ params = gcnew List<KeyValuePair<String^, Object^>>;
    params->Add(KeyValuePair<String^, Object^>("@Id", Id));
    switch (table)
    {
    case Table::Clients:
    {
        text = "SELECT Id From dbo.Parcels WHERE CenderId = @Id or ReciverId = @Id";
        for each (long DeleteById in GetIdsByQuery(text, params))
            Delete(Table::Parcels, DeleteById);
        text = "DELETE FROM dbo.Clients WHERE Id = @Id";
        break;
    }
    case Table::Couriers:
    {
        text = "DELETE FROM dbo.Couriers WHERE Id = @Id";
        break;
    }
    case Table::FacilityTypes:
    {
        text = "SELECT Id From dbo.PostalFacilitys WHERE FacilityTypeId = @Id";
        for each (long DeleteById in GetIdsByQuery(text, params))
            Delete(Table::PostalFacilitys, DeleteById);
        text = "DELETE FROM dbo.FacilityTypes WHERE Id = @Id";
        break;
    }
    case Table::Parcels:
    {
        text = "UPDATE dbo.Couriers SET ParcelId = NULL WHERE ParcelId = @Id";
        Execute(text, params);
        text = "DELETE FROM dbo.Parcels WHERE Id = @Id";
        break;
    }
    case Table::ParcelStatuses:
    {
        text = "UPDATE dbo.Parcels SET StatusId = NULL WHERE StatusId = @Id";
        Execute(text, params);
        text = "DELETE FROM dbo.ParcelStatuses WHERE Id = @Id";
        break;
    }
    case Table::PostalFacilitys:
    {
        text = "SELECT Id From dbo.Parcels WHERE DeparturePointsId = @Id or DeliveryPointsId = @Id";
        for each (long DeleteById in GetIdsByQuery(text, params))
            Delete(Table::Parcels, DeleteById);
        text = "UPDATE dbo.Parcels SET CurrentLocationId = NULL WHERE CurrentLocationId = @Id";
        Execute(text, params);
        text = "DELETE FROM dbo.PostalFacilitys WHERE Id = @Id";
        break;
    }
    default: break;
    }
    Loggers::FileLog->LogMessage(text + " [Id = " + Id.ToString() + "]");
    Execute(text, params);
}

SqlDataAdapter^ SQLRepository::GetTableAdapter(Table table)
{
    switch (table)
    {
    case Table::Clients:
        text = "SELECT * FROM dbo.Clients";
        break;
    case Table::Couriers:
        text = "SELECT * FROM dbo.Couriers";
        break;
    case Table::FacilityTypes:
        text = "SELECT * FROM dbo.FacilityTypes";
        break;
    case Table::Parcels:
        text = "SELECT * FROM dbo.Parcels";
        break;
    case Table::ParcelStatuses:
        text = "SELECT * FROM dbo.ParcelStatuses";
        break;
    case Table::PostalFacilitys:
        text = "SELECT * FROM dbo.PostalFacilitys";
        break;
    default: break;
    }

    return gcnew SqlDataAdapter(text, connection);
}

void SQLRepository::Validate(Table table, Entity^ obj)
{
    switch (table)
    {
    case Table::Clients: {
        Client^ client = (Client^)obj;
        if (client->Name->Length >= 50)
            throw gcnew Exception("Ім'я повинно бути завдовжки менше 50");
        if ((gcnew Text::RegularExpressions::Regex("^\\+?[0-9]{1,3}?[- .]?\\(?[0-9]{1,4}?\\)?[- .]?[0-9]{1,4}[- .]?[0-9]{1,9}$"))->IsMatch(client->ContactNumber))
            throw gcnew Exception("Не коректний номер телефону");
        if (client->Email->Length >= 50)
            throw gcnew Exception("Email повинен бути завдовжки менше 50");
        break;
    }
    case Table::Couriers: {
        Courier^ сourier = (Courier^)obj;
        if (сourier->Name->Length >= 50)
            throw gcnew Exception("Ім'я повинно бути завдовжки менше 50");
        if (сourier->City->Length >= 50)
            throw gcnew Exception("Назва міста повинна бути завдовжки менше 50");
        break;
    }
    case Table::FacilityTypes: {
        FacilityType^ facilityType = (FacilityType^)obj;
        if (facilityType->Type->Length >= 50)
            throw gcnew Exception("Назва типу повинно бути завдовжки менше 50");
        break;
    }
    case Table::Parcels: {
        Parcel^ parcel = (Parcel^)obj;
        if (parcel->Info->Length >= 50)
            throw gcnew Exception("Інформація повинна бути завдовжки менше 50");
        if (parcel->Weight < 0)
            throw gcnew Exception("Вага не може бути від'ємною");
        if (parcel->SenderId == parcel->ReciverId)
            throw gcnew Exception("Відправник та отримувач не може бути одною й тоюж людиною");
        if (parcel->DeparturePointsId == parcel->DeliveryPointsId)
            throw gcnew Exception("Відділення відправки та отримки не може бути одне й теж");
        if (parcel->Price < 0)
            throw gcnew Exception("Вартість не може бути від'ємною");
        if (parcel->DeliveryAddress->Length > 50)
            throw gcnew Exception("Адреса доставки повинна бути завдовжки менше 50");
        break;
    }
    case Table::ParcelStatuses: {
        ParcelStatus^ parcelStatus = (ParcelStatus^)obj;
        if (parcelStatus->Status->Length >= 50)
            throw gcnew Exception("Назва статусу повинно бути завдовжки менше 50");
        break;
    }
    case Table::PostalFacilitys: {
        PostalFacility^ postalFacility = (PostalFacility^)obj;
        if (postalFacility->Name->Length >= 50)
            throw gcnew Exception("Назва відділення повинна бути завдовжки менше 50");
        if (postalFacility->Address->Length >= 50)
            throw gcnew Exception("Адреса відділення повинна бути завдовжки менше 50");
        if (postalFacility->WorkSchedule->Length >= 50)
            throw gcnew Exception("Робочий графік відділення повинен бути завдовжки менше 50");
        if (postalFacility->WeightRestrictions < 0)
            throw gcnew Exception("Максимальна вага для посилок не може бути від'ємною");
        break;
    }
    default: break;
    }

}

void SQLRepository::Execute(String^ query, List<KeyValuePair<String^, Object^>>^ params)
{
    command = gcnew SqlCommand(query, connection);
    for each (auto param in params)
        command->Parameters->AddWithValue(param.Key, param.Value);
    connection->Open();
    command->ExecuteNonQuery();
    connection->Close();
}

Object^ SQLRepository::ExecuteScalar(String^ query, List<KeyValuePair<String^, Object^>>^ params)
{
    command = gcnew SqlCommand(query, connection);
    for each (auto param in params)
        command->Parameters->AddWithValue(param.Key, param.Value);
    connection->Open();
    Object^ res = command->ExecuteScalar();
    connection->Close();
    return res;
}

SqlDataReader^ SQLRepository::ExecuteReader(String^ query, List<KeyValuePair<String^, Object^>>^ params)
{
    command = gcnew SqlCommand(query, connection);
    for each (auto param in params)
        command->Parameters->AddWithValue(param.Key, param.Value);
    SqlDataReader^ res = command->ExecuteReader();
    return res;
}

Entity^ SQLRepository::ReadFromReader(Table table, SqlDataReader^ reader)
{
    Entity^ res = nullptr;
    if (reader->Read())
    {
        switch (table)
        {
        case Table::Clients: {
            Client^ client = gcnew Client();
            client->Id = Convert::ToInt64(reader["Id"]);
            client->Name = reader["Id"]->ToString();
            client->ContactNumber = reader["ContactNumber"]->ToString();
            client->Email = reader["Email"]->ToString();
            res = client;
            break;
        }
        case Table::Couriers: {
            Courier^ courier = gcnew Courier();
            courier->Id = Convert::ToInt64(reader["Id"]);
            courier->Name = reader["Id"]->ToString();
            courier->City = reader["City"]->ToString();
            courier->ParcelId = Convert::ToInt64(reader["ParcelId"]);
            res = courier;
            break;
        }
        case Table::FacilityTypes: {
            FacilityType^ facilityType = gcnew FacilityType();
            facilityType->Id = Convert::ToInt64(reader["Id"]);
            facilityType->Type = reader["Type"]->ToString();
            res = facilityType;
            break;
        }
        case Table::Parcels: {
            Parcel^ parcel = gcnew Parcel();
            parcel->Id = Convert::ToInt64(reader["Id"]);
            parcel->Info = reader["Info"]->ToString();
            parcel->Weight = Convert::ToDouble(reader["Weight"]);
            parcel->SenderId = Convert::ToInt64(reader["SenderId"]);
            parcel->ReciverId = Convert::ToInt64(reader["ReciverId"]);
            parcel->DeparturePointsId = Convert::ToInt64(reader["DeparturePointsId"]);
            parcel->DeliveryPointsId = Convert::ToInt64(reader["DeliveryPointsId"]);
            parcel->Price = Convert::ToInt64(reader["Price"]);
            parcel->StatusId = Convert::ToInt64(reader["StatusId"]);
            parcel->CurrentLocationId = Convert::ToInt64(reader["CurrentLocationId"]);
            parcel->DeliveryAddress = reader["DeliveryAddress"]->ToString();
            res = parcel;
            break;
        }
        case Table::ParcelStatuses: {
            ParcelStatus^ parcelStatus = gcnew ParcelStatus();
            parcelStatus->Id = Convert::ToInt64(reader["Id"]);
            parcelStatus->Status = reader["Status"]->ToString();
            res = parcelStatus;
            break;
        }
        case Table::PostalFacilitys: {
            PostalFacility^ postalFacility = gcnew PostalFacility();
            postalFacility->Id = Convert::ToInt64(reader["Id"]);
            postalFacility->Name = reader["Name"]->ToString();
            postalFacility->FacilityTypeId = Convert::ToInt64(reader["FacilityTypeId"]);
            postalFacility->Address = reader["Address"]->ToString();
            postalFacility->WorkSchedule = reader["WorkSchedule"]->ToString();
            postalFacility->WeightRestrictions = Convert::ToDouble(reader["WeightRestrictions"]);
            res = postalFacility;
        }
        default: break;
        }
    }
    return res;
}

List<long>^ SQLRepository::GetIdsByQuery(String^ query, List<KeyValuePair<String^, Object^>>^ params)
{
    connection->Open();
    SqlDataReader^ reader = ExecuteReader(query, params);
    List<long>^ res = gcnew List<long>();
    while (reader->Read())
        res->Add(Convert::ToInt64(reader["Id"]));
    connection->Close();
    return res;
}

List<KeyValuePair<String^, Object^>>^ SQLRepository::GetCommandParameters(Table table, Entity^ obj, bool withId) {
    List<KeyValuePair<String^, Object^>>^ res = gcnew List<KeyValuePair<String^, Object^>>();
    if(withId)
        res->Add(KeyValuePair<String^, Object^>("@Id", obj->Id));
    switch (table)
    {
    case Table::Clients:
    {
        Client^ client = (Client^)obj;
        res->Add(KeyValuePair<String^, Object^>("@Name", client->Name ));
        res->Add(KeyValuePair<String^, Object^>("@ContactNumber", client->ContactNumber));
        res->Add(KeyValuePair<String^, Object^>("@Email", client->Email));
        return res;
    }
    case Table::Couriers:
    {
        Courier^ courier = (Courier^)obj;
        res->Add(KeyValuePair<String^, Object^>("@Name", courier->Name));
        res->Add(KeyValuePair<String^, Object^>("@City", courier->City));
        res->Add(KeyValuePair<String^, Object^>("@ParcelId", courier->ParcelId));
        return res;
    }
    case Table::FacilityTypes:
    {
        FacilityType^ facilityType = (FacilityType^)obj;
        res->Add(KeyValuePair<String^, Object^>("@Type", facilityType->Type));
        return res;
    }
    case Table::Parcels:
    {
        Parcel^ parcel = (Parcel^)obj;
        res->Add(KeyValuePair<String^, Object^>("@Info", parcel->Info));
        res->Add(KeyValuePair<String^, Object^>("@Weight", parcel->Weight));
        res->Add(KeyValuePair<String^, Object^>("@SenderId", parcel->SenderId));
        res->Add(KeyValuePair<String^, Object^>("@ReciverId", parcel->ReciverId));
        res->Add(KeyValuePair<String^, Object^>("@DeparturePointsId", parcel->DeparturePointsId));
        res->Add(KeyValuePair<String^, Object^>("@DeliveryPointsId", parcel->DeliveryPointsId));
        res->Add(KeyValuePair<String^, Object^>("@Price", parcel->Price));
        res->Add(KeyValuePair<String^, Object^>("@StatusId", parcel->StatusId));
        res->Add(KeyValuePair<String^, Object^>("@CurrentLocationId", parcel->CurrentLocationId));
        res->Add(KeyValuePair<String^, Object^>("@DeliveryAddress", parcel->DeliveryAddress));
        return res;
    }
    case Table::ParcelStatuses:
    {
        ParcelStatus^ parcelStatus = (ParcelStatus^)obj;
        res->Add(KeyValuePair<String^, Object^>("@Status", parcelStatus->Status));
        return res;
    }
    case Table::PostalFacilitys:
    {
        PostalFacility^ postalFacility = (PostalFacility^)obj;
        res->Add(KeyValuePair<String^, Object^>("@Name", postalFacility->Name));
        res->Add(KeyValuePair<String^, Object^>("@FacilityTypeId", postalFacility->FacilityTypeId));
        res->Add(KeyValuePair<String^, Object^>("@Address", postalFacility->Address));
        res->Add(KeyValuePair<String^, Object^>("@WorkSchedule", postalFacility->WorkSchedule));
        res->Add(KeyValuePair<String^, Object^>("@WeightRestrictions", postalFacility->WeightRestrictions));
        return res;
    }
    default: break;
    }
}

