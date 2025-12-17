#include <iostream>
#include <cstdlib>
#include <string>
#include "number_systems.hpp"

using namespace std;

int main(){

    cout << "Hello, world!" << endl;

    number_systems::BinaryNumber bnumber("1111");
    cout << bnumber.getBinary()  << endl;

    cout << number_systems::binaryToDecimal("1000") << endl;
    
    cout << bnumber.toDecimal() << endl;
    cout << bnumber.toHex() << endl;

    cout << "\n" << number_systems::binaryToHex("11101011100") << endl;
    //cout << (5<<2) << endl; 
    
    return 0;
}
