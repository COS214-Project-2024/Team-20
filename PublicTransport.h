#ifndef PUBLICTRANSPORT_H
#define PUBLICTRANSPORT_H
#include "ModeOfTransport.h"
#include <memory>
class PublicTransport : public ModeOfTransport {

private:
	int capacity;
	int routesAvailable;

public:

	PublicTransport(int cap, int routes, std::shared_ptr<TransportationState> state= nullptr);
	void travel() override;
	void stopAtStation();

	bool isAvailable() override;
	float calculateCommuteTime(float distance, float speed, const std::string& mode) override;


int getCapacity() const;
    void setCapacity(int cap);

    int getRoutesAvailable() const;
    void setRoutesAvailable(int routes);
	// virtual ~PublicTransport() = default;
	// virtual ~PublicTransport(); 
};

#endif
