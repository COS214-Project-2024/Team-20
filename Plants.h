#ifndef PLANTS_H
#define PLANTS_H

#include "Industrial.h"

class Plants : public Industrial {
public:
    Plants();
    ~Plants() override;

    void display() const override;
    void updateEmploymentRating() override;
    void updatePollutionLevel() override;
};

#endif