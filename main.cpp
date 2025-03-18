#include "Truckloads.h"
#include <iostream>
#include "Reverser.h"

int main(){

    // Truckloads truck;

    // std::cout << "Expecting 6: " << truck.numTrucks(14,3) << "\n";
    // std::cout << "Expecting 15: " << truck.numTrucks(15,1) << "\n";
    // std::cout << "Expecting 256: " << truck.numTrucks(1024,5) << "\n";

    Reverser r;

    // std::cout << "Expecting tree: " << r.reverseString("eert") << "\n";
    // std::cout << "Expecting ihgfedcba: " << r.reverseString("abcdefghi") << "\n";
    // std::cout << "Expecting nortuen ymmij: " << r.reverseString("jimmy neutron") << "\n";
    // std::cout << "Expecting Enieledam: " << r.reverseString("madeleinE") << "\n";
    // std::cout << "Expecting tacocat: " << r.reverseString("tacocat") << "\n";

    std::cout << "Expecting 54321: " << r.reverseDigit(12345) << "\n";
    std::cout << "Expecting 12345: " << r.reverseDigit(54321) << "\n";
    std::cout << "Expecting 8374595: " << r.reverseDigit(5954738) << "\n";
    std::cout << "Expecting 209371: " << r.reverseDigit(173902) << "\n";
    std::cout << "Expecting 1000000: " << r.reverseDigit(0000001) << "\n";

    return 0;
}