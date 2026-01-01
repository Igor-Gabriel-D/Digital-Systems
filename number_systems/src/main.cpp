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

    cout << "\n" << number_systems::binaryToHex("1111000") << endl;
    cout << number_systems::hexToDecimal("A10") << endl;
    cout << number_systems::hexToBinary("FF") << endl;

    return 0;
}
