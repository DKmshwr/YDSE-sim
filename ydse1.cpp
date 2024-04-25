#include <iostream>
#include <cmath>

// Constants
const double PI = 3.14159265358979323846;
const double SPEED_OF_LIGHT = 299792458.0; // m/s

// Function to calculate fringe width
double calculateFringeWidth(double d, double lambda) {
    return (d * lambda) / (SPEED_OF_LIGHT * PI);
}

// Function to calculate the position of nth order maximum
double calculateMaximumPosition(int n, double d, double lambda) {
    return (n * lambda) / (d * 2);
}

int main() {
    // Parameters
    double d = 0.1; // Distance between slits (m)
    double lambda = 0.000588; // Wavelength of light (m)

    // Calculate fringe width
    double fringeWidth = calculateFringeWidth(d, lambda);
    std::cout << "Fringe width: " << fringeWidth << " m" << std::endl;

    // Calculate position of 3rd order maximum
    double thirdMaximumPosition = calculateMaximumPosition(3, d, lambda);
    std::cout << "Position of 3rd order maximum: " << thirdMaximumPosition << " m" << std::endl;

    return 0;
}