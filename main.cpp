#include "Truckloads.h"
#include <iostream>

int main(){

    Truckloads truck;

    std::cout << "Expecting 6: " << truck.numTrucks(14,3) << "\n";
    std::cout << "Expecting 15: " << truck.numTrucks(15,1) << "\n";
    std::cout << "Expecting 256: " << truck.numTrucks(1024,5) << "\n";

    return 0;
}