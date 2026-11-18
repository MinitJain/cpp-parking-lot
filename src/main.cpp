#include <iostream>
#include "parking_lot/vehicle.h"

const char* vehicleTypeName(VehicleType type) {
    switch (type) {
        case VehicleType::Bike:  return "Bike";
        case VehicleType::Car:   return "Car";
        case VehicleType::Truck: return "Truck";
    }
    return "Unknown";
}


int main() {
    std::cout << "Parking Lot\n";
    Vehicle car("car-001", VehicleType::Car);
    std::cout << "Vehicle ID: " << car.id() << ", Type: " << vehicleTypeName(car.type()) << std::endl;
  
    return 0;
}

