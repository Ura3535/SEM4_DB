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

long Repository::SQLRepository::Add(Table table, Entity^ obj)
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
    command->ExecuteNonQuery();
    text = "SELECT SCOPE_IDENTITY()";
    command = gcnew SqlCommand(text, connection);
    return Convert::ToInt64(command->ExecuteScalar());
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

