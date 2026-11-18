#include <iostream>
#include "parking_lot/vehicle.h"

const char *vehicleTypeName(VehicleType type)
{
    switch (type)
    {
    case VehicleType::Bike:
        return "Bike";
    case VehicleType::Car:
        return "Car";
    case VehicleType::Truck:
        return "Truck";
    }
    return "Unknown";
}

int main()
{

    Vehicle car("car-001", VehicleType::Car);
    ParkingSession session("session-001", car.id());
    std::cout << "Vehicle ID: " << car.id()
              << ", Type: " << vehicleTypeName(car.type()) << '\n';
    std::cout << "Session belongs to: " << session.vehicleId() << '\n';

    return 0;
}