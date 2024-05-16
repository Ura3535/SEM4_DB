#pragma once

using namespace System;

namespace Models
{
	ref struct Entity
	{
		long Id;
		static const long DEFAULT_ID = -1;
	};

	ref struct Client : Entity
	{
		String^ Name;
		String^ ContactNumber;
		String^ Email;
	};

	ref struct Courier : Entity
	{
		String^ Name;
		String^ City;
		long ParcelId;
	};

	ref struct FacilityType : Entity
	{
		String^ Type;
	};

	ref struct Parcel : Entity
	{
		String^ Info;
		float Weight;
		long SenderId;
		long ReciverId;
		long DeparturePointsId;
		long DeliveryPointsId;
		long Price;
		long StatusId;
		long CurrentLocationId;
		String^ DeliveryAddress;
	};

	ref struct ParcelStatus : Entity
	{
		String^ Status;
	};

	ref struct PostalFacility : Entity
	{
		String^ Name;
		long FacilityTypeId;
		String^ Address;
		String^ WorkSchedule;
		float WeightRestrictions;
	};
}
