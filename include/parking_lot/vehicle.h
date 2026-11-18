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


class ParkingSession {
public:
ParkingSession(std::string sessionId, std::string vehicleId)
: sessionId_(sessionId), vehicleId_(vehicleId) {}
const std::string& vehicleId() const { return vehicleId_; }

private:
std::string sessionId_;
std::string vehicleId_;
};

