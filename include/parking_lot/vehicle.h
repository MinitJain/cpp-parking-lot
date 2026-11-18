#pragma once

#include <string>

enum class VehicleType {
    Bike,
    Car,
    Truck
};

class Vehicle {
public:
    Vehicle(std::string id, VehicleType type)
        : id_(id), type_(type) {}

    const std::string& id() const { return id_; }
    VehicleType type() const { return type_; }

private:
    std::string id_;
    VehicleType type_;
};
