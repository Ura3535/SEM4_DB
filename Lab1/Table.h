#pragma once

#include<fstream>

using String = System::String;

struct FacilityType
{
	void load(std::ifstream& in, int pos);
	void save(std::ofstream& out, int pos) const;

	long Id;
	char Type[50];

	static constexpr int size = sizeof(Id) + sizeof(Type);
};

struct PostalFacility
{
	void load(std::ifstream& in, int pos);
	void save(std::ofstream& out, int pos) const;

	long Id;
	char Name[50];
	long FacilityTypeId;
	char Address[50];
	char WorkSchedule[100];
	float WeightRestrictions;

	static constexpr int size = sizeof(Id) + sizeof(Name) + sizeof(FacilityTypeId) + sizeof(Address) + sizeof(WorkSchedule) + sizeof(WeightRestrictions);
};