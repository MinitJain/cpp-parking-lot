# C++ Parking Lot

A C++17 low-level design exercise modeling parking spot allocation, ticket lifecycle, and payment attempts.

## Build and run

Requires a C++17 compiler and CMake 3.16 or newer.

```sh
cmake -S . -B build
cmake --build build
./build/parking_lot
```

On macOS, install CMake with Homebrew (`brew install cmake`) if it is not already available.

## Design

We will build this incrementally, starting with `Vehicle`, then parking spots, floors, tickets, and the lot coordinator. Payment is a local model only; there is no external payment integration.
