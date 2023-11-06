/*
Volume.cpp
Gets radius of a sphere as float from user and calculates the
correlating volume and surface area of corresponding sphere.

Tim Diliberto
*/  
#include <cstdio>

int main()
{
    // Initialize PI and declare R floats
    float pi = 3.14159;
    float r;

    // Get input from user
    printf("Please input the radius of a sphere: ");
    scanf("%f", &r);

    // Calculate V & S floats
    float V = (4.0 / 3.0) * pi * r * r * r;
    float S = 4.0 * pi * r * r;

    // Display volume and surface area to user
    printf("Volume = %f\n", V);
    printf("Surface Area = %f\n", S);

    return 0;
}