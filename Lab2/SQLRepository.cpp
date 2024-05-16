#include "SQLRepository.h"

using namespace Repository;

SQLRepository::SQLRepository()
    : builder(gcnew SqlConnectionStringBuilder())
{
    builder->DataSource = "DESKTOP-LGFLGFJ\SQLEXPRESS";
    builder->InitialCatalog = "DBPostOffice";
    builder->IntegratedSecurity = true;

    connection = gcnew SqlConnection(Convert::ToString(builder));
}

long SQLRepository::Add(Table table, Entity^ obj)
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
    AddCommandParameters(table, obj);
    connection->Open();
    command->ExecuteNonQuery();
    text = "SELECT SCOPE_IDENTITY()";
    command = gcnew SqlCommand(text, connection);
    long res = Convert::ToInt64(command->ExecuteScalar());
    connection->Close();

    return res;
}

Entity^ SQLRepository::Get(Table table, long Id)
{
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
    command = gcnew SqlCommand(text, connection);
    command->Parameters->AddWithValue("@Id", Id);
    connection->Open();
    reader = command->ExecuteReader();
    connection->Close();
    if (reader->Read())
    {
        switch (table)
        {
        case Table::Clients:
        {
            Client^ client = gcnew Client();
            client->Id = Convert::ToInt64(reader["Id"]);
            client->Name = reader["Id"]->ToString();
            client->ContactNumber = reader["ContactNumber"]->ToString();
            client->Email = reader["Email"]->ToString();
            return client;
        }
        case Table::Couriers:
        {
            Courier^ courier = gcnew Courier();
            courier->Id = Convert::ToInt64(reader["Id"]);
            courier->Name = reader["Id"]->ToString();
            courier->City = reader["City"]->ToString();
            courier->ParcelId = Convert::ToInt64(reader["ParcelId"]);
            return courier;
        }
        case Table::FacilityTypes:
        {
            FacilityType^ facilityType = gcnew FacilityType();
            facilityType->Id = Convert::ToInt64(reader["Id"]);
            facilityType->Type = reader["Type"]->ToString();
            return facilityType;
        }
        case Table::Parcels:
        {
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
            return parcel;
        }
        case Table::ParcelStatuses:
        {
            ParcelStatus^ parcelStatus = gcnew ParcelStatus();
            parcelStatus->Id = Convert::ToInt64(reader["Id"]);
            parcelStatus->Status = reader["Status"]->ToString();
            return parcelStatus;
        }
            break;
        case Table::PostalFacilitys:
        {
            PostalFacility^ postalFacility = gcnew PostalFacility();
            postalFacility->Id = Convert::ToInt64(reader["Id"]);
            postalFacility->Name = reader["Name"]->ToString();
            postalFacility->FacilityTypeId = Convert::ToInt64(reader["FacilityTypeId"]);
            postalFacility->Address = reader["Address"]->ToString();
            postalFacility->WorkSchedule = reader["WorkSchedule"]->ToString();
            postalFacility->WeightRestrictions = Convert::ToDouble(reader["WeightRestrictions"]);
            return postalFacility;
        }
        default: break;
        }
    }
}

void SQLRepository::Update(Table table, Entity^ obj)
{

    switch (table)
    {
    case Table::Clients:
        text = "UPDATE dbo.Clients SET "
            + "Name = '@Name', "
            + "ContactNumber = '@ContactNumber', "
            + "Email = '@Email' "
            + "WHERE Id = @Id";
        break;
    case Table::Couriers:
        text = "UPDATE dbo.Couriers SET "
            + "Name = '@Name', "
            + "City = '@City', "
            + "ParcelId = '@ParcelId' "
            + "WHERE Id = @Id";
        break;
    case Table::FacilityTypes:
        text = "UPDATE dbo.FacilityTypes SET "
            + "Type = '@Type' "
            + "WHERE Id = @Id";
        break;
    case Table::Parcels:
        text = "UPDATE dbo.Parcels SET "
            + "Info = '@Info', "
            + "Weight = '@Weight', "
            + "SenderId = '@SenderId', "
            + "ReciverId = '@ReciverId', "
            + "DeparturePointsId = '@DeparturePointsId', "
            + "DeliveryPointsId = '@DeliveryPointsId', "
            + "Price = '@Price', "
            + "StatusId = '@StatusId', "
            + "CurrentLocationId = '@CurrentLocationId', "
            + "DeliveryAddress = '@DeliveryAddress' "
            + "WHERE Id = @Id";
        break;
    case Table::ParcelStatuses:
        text = "UPDATE dbo.ParcelStatuses SET "
            + "Status = '@Status' "
            + "WHERE Id = @Id";
        break;
    case Table::PostalFacilitys:
        text = "UPDATE dbo.Parcels SET "
            + "Name = '@Name', "
            + "FacilityTypeId = '@FacilityTypeId', "
            + "Address = '@Address', "
            + "WorkSchedule = '@WorkSchedule', "
            + "WeightRestrictions = '@WeightRestrictions' "
            + "WHERE Id = @Id";
        break;
    default: break;
    }
    command = gcnew SqlCommand(text, connection);
    AddCommandParameters(table, obj);
    command->Parameters->AddWithValue("@Id", obj->Id);
    connection->Open();
    command->ExecuteNonQuery();
    connection->Close();
}

void SQLRepository::Delete(Table table, long Id)
{

    switch (table)
    {
    case Table::Clients:
        text = "DELETE FROM dbo.Clients WHERE Id = @Id";
        break;
    case Table::Couriers:
        text = "DELETE FROM dbo.Couriers WHERE Id = @Id";
        break;
    case Table::FacilityTypes:
        text = "DELETE FROM dbo.FacilityTypes WHERE Id = @Id";
        break;
    case Table::Parcels:
        text = "DELETE FROM dbo.Parcels WHERE Id = @Id";
        break;
    case Table::ParcelStatuses:
        text = "DELETE FROM dbo.ParcelStatuses WHERE Id = @Id";
        break;
    case Table::PostalFacilitys:
        text = "DELETE FROM dbo.PostalFacilitys WHERE Id = @Id";
        break;
    default: break;
    }
    command = gcnew SqlCommand(text, connection);
    command->Parameters->AddWithValue("@Id", Id);
    connection->Open();
    command->ExecuteNonQuery();
    connection->Close();
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

void SQLRepository::AddCommandParameters(Table table, Entity^ obj) {
    command = gcnew SqlCommand(text, connection);
    switch (table)
    {
    case Table::Clients:
    {
        Client^ client = (Client^)obj;
        command->Parameters->AddWithValue("@Name", client->Name);
        command->Parameters->AddWithValue("@ContactNumber", client->ContactNumber);
        command->Parameters->AddWithValue("@Email", client->Email);
    }
        break;

    case Table::Couriers:
    {
        Courier^ courier = (Courier^)obj;
        command->Parameters->AddWithValue("@Name", courier->Name);
        command->Parameters->AddWithValue("@City", courier->City);
        command->Parameters->AddWithValue("@ParcelId", courier->ParcelId);
    }
        break;

    case Table::FacilityTypes:
    {
        FacilityType^ facilityType = (FacilityType^)obj;
        command->Parameters->AddWithValue("@Type", facilityType->Type);
    }
        break;

    case Table::Parcels:
    {
        Parcel^ parcel = (Parcel^)obj;
        command->Parameters->AddWithValue("@Info", parcel->Info);
        command->Parameters->AddWithValue("@Weight", parcel->Weight);
        command->Parameters->AddWithValue("@SenderId", parcel->SenderId);
        command->Parameters->AddWithValue("@ReciverId", parcel->ReciverId);
        command->Parameters->AddWithValue("@DeparturePointsId", parcel->DeparturePointsId);
        command->Parameters->AddWithValue("@DeliveryPointsId", parcel->DeliveryPointsId);
        command->Parameters->AddWithValue("@Price", parcel->Price);
        command->Parameters->AddWithValue("@StatusId", parcel->StatusId);
        command->Parameters->AddWithValue("@CurrentLocationId", parcel->CurrentLocationId);
        command->Parameters->AddWithValue("@DeliveryAddress", parcel->DeliveryAddress);
    }
        break;

    case Table::ParcelStatuses:
    {
        ParcelStatus^ parcelStatus = (ParcelStatus^)obj;
        command->Parameters->AddWithValue("@Status", parcelStatus->Status);
    }
        break;

    case Table::PostalFacilitys:
    {
        PostalFacility^ postalFacility = (PostalFacility^)obj;
        command->Parameters->AddWithValue("@Name", postalFacility->Name);
        command->Parameters->AddWithValue("@FacilityTypeId", postalFacility->FacilityTypeId);
        command->Parameters->AddWithValue("@Address", postalFacility->Address);
        command->Parameters->AddWithValue("@WorkSchedule", postalFacility->WorkSchedule);
        command->Parameters->AddWithValue("@WeightRestrictions", postalFacility->WeightRestrictions);
    }
        break;

    default: break;
    }
}

