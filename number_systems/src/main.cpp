#include <iostream>
#include <cstdlib>
#include <string>
#include "number_systems.hpp"

using namespace std;

int main(){

    cout << "Hello, world!" << endl;

    number_systems::BinaryNumber bnumber("10");
    cout << bnumber.getBinary()  << endl;

    cout << number_systems::binaryToDecimal("1000") << endl;
    cout << bnumber.toDecimal() << endl;

    return 0;
}
