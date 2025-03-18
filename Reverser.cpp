#include "Reverser.h"
#include <cmath>

Reverser::Reverser(){

}

int Reverser::reverseDigit(int value){

    //error case
    if (value < 0) {
        return -1;
    }

    //initialising variables
    int n = floor(log10(value));
    
    //base case
    if (value < 10){
        return value;
    }

    //recursive case
    else {
        return(((value%10)*(pow(10, n))) + reverseDigit(value/10));
    }

}

std::string Reverser::reverseString(std::string characters){

    //error handling

    //base case
    if (characters.length() == 1){        
        return characters;
    }

    //recursive case
    else {
        return(characters[characters.length()-1] + reverseString(characters.substr(0,characters.length()-1)));
    }    

}