#include "Truckloads.h"

Truckloads::Truckloads(){
    
}

int Truckloads::numTrucks(int numCrates, int loadSize){

    //this function takes two integers, one for the number of crates, and one for the load size
    //it then calculates the number of trucks required when splitting the crates into two piles
    //again and again recursively, until the piles fit in a truck, ie. loadSize or smaller
    //it then returns the number of trucks required

    //base case
    if(numCrates <= loadSize){
        return 1;
    }

    //recursive case
    else {
        return (numTrucks(numCrates/2 + numCrates%2, loadSize)
            + numTrucks(numCrates/2, loadSize));
    }

}