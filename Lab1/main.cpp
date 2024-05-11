#include "Repository.h"
#include <iostream>

int main() {
	repository::Repository rep;
	FacilityType tmp1{ 0, "new" }, tmp2{ 0, "new2" }, tmp3{ 0, "new3" };
	PostalFacility PF1{ 0, "Name", 1, "Home", "Everyday", 20};
	//rep.facilityType.Insert(tmp1);
	//rep.facilityType.Insert(tmp2);
	//rep.postalFacility.Insert(PF1);
	rep.facilityType.Delete(1);
	for (const auto& x : rep.facilityType.GetAll())
		std::cout << x.Id << ' ' << x.Type << '\n';
	std::cout << '\n';
	for (const auto& x : rep.postalFacility.GetAll())
		std::cout
			<< x.Id << ' ' << x.Name << ' '
			<< x.FacilityTypeId << ' ' << x.Address << ' '
			<< x.WorkSchedule << ' ' << x.WeightRestrictions << '\n';

	//rep.facilityType.Insert(tmp3);

	std::cin.ignore();
}