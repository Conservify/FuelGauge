#ifndef FUEL_GAUGE_H_INCLUDED
#define FUEL_GAUGE_H_INCLUDED

#include <Wire.h>
#include <Arduino.h>

class FuelGauge {
private:
    uint8_t address;

public:
    FuelGauge();

public:
    void powerOn();
    uint32_t version();
    float stateOfCharge();
    float cellVoltage();

};

#endif
