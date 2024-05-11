#include "Repository.h"

int main() {
	FacilityType Q1{ -1, "Postal automat" }, Q2{1, "Depo" };
	repository::FacilityTypeRepository rep;
	rep.Delete(0);

}