#include "Table.h"

void FacilityType::load(std::ifstream& in, int pos) {
	in.seekg(pos * size, std::ios::beg);

	in.read(reinterpret_cast<char*>(&Id), sizeof(Id));
	in.read(Type, sizeof(Type));
}

void FacilityType::save(std::ofstream& out, int pos) const {
	out.seekp(pos, std::ios::beg);

	out.write(reinterpret_cast<const char*>(&Id), sizeof(Id));
	out.write(Type, sizeof(Type));
}


void PostalFacility::load(std::ifstream& in, int pos) {
	in.seekg(pos * size, std::ios::beg);

	in.read(reinterpret_cast<char*>(&Id), sizeof(Id));
	in.read(Name, sizeof(Name));
	in.read(reinterpret_cast<char*>(&FacilityTypeId), sizeof(FacilityTypeId));
	in.read(Address, sizeof(Address));
	in.read(WorkSchedule, sizeof(WorkSchedule));
	in.read(reinterpret_cast<char*>(&WeightRestrictions), sizeof(WeightRestrictions));
}

void PostalFacility::save(std::ofstream& out, int pos) const {
	out.seekp(pos * size, std::ios::beg);

	out.write(reinterpret_cast<const char*>(&Id), sizeof(Id));
	out.write(Name, sizeof(Name));
	out.write(reinterpret_cast<const char*>(&FacilityTypeId), sizeof(FacilityTypeId));
	out.write(Address, sizeof(Address));
	out.write(WorkSchedule, sizeof(WorkSchedule));
	out.write(reinterpret_cast<const char*>(&WeightRestrictions), sizeof(WeightRestrictions));
}