#pragma once

struct FacilityType
{
	long Id;
	char Type[50];

	static constexpr size_t size = sizeof(Id) + sizeof(Type);
};

struct PostalFacility
{
	long Id;
	char Name[50];
	long FacilityTypeId;
	char Address[50];
	char WorkSchedule[100];
	float WeightRestrictions;

	static constexpr size_t size = sizeof(Id) + sizeof(Name) + sizeof(FacilityTypeId) + sizeof(Address) + sizeof(WorkSchedule) + sizeof(WeightRestrictions);
};