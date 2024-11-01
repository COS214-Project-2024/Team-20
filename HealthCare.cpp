#include "HealthCare.h"

HealthCare::HealthCare(City* city):PublicServicesDepartment(city){}

void HealthCare::handleRequest(int requestType) {
	std::cout<<"Request has entered Health Care Service Department"<<std::endl;
	if(getAvailableServices()[requestType]=="Health")
	{
		std::cout<<"Health care services have been provided to Citizen"<<std::endl;
	}
	else{
		std::cout<<"Health Care Service Department was unable to handle the request"<<std::endl;
		PublicServicesDepartment::handleRequest(requestType);
	}
}