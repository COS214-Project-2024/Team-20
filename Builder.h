#ifndef BUILDER_H
#define BUILDER_H

#include "CompositeBuilding.h"

/**
 * @class Builder
 * @brief Abstract builder class for constructing components of a composite building.
 * 
 * Defines the interface for building different aspects of a city’s infrastructure, 
 * such as population growth, housing, economic development, and infrastructure.
 */
class Builder {
public:
    virtual ~Builder() = default;

    /**
     * @brief Builds and manages population growth features in the city.
     */
    virtual void buildPopulationGrowth() = 0;

    /**
     * @brief Constructs new housing or expands existing housing facilities.
     */
    virtual void buildHousingExpansion() = 0;

    /**
     * @brief Develops the city's economic structures and support facilities.
     */
    virtual void buildEconomicDevelopment() = 0;

    /**
     * @brief Expands infrastructure, including utilities and public services.
     */
    virtual void buildInfrastructureExpansion() = 0;

    /**
     * @brief Retrieves the final composite building after construction.
     * @return Pointer to the CompositeBuilding instance.
     */
    virtual CompositeBuilding* getCompositeBuilding() = 0;
};

#endif // BUILDER_H
