#include <iostream>
#include <cstdlib>
#include <string>
#include "number_systems.hpp"

using namespace std;

int main(){

    cout << "Hello, world!" << endl;

    number_systems::BinaryNumber bnumber("1");
    cout << bnumber.getBinary()  << endl;

    return 0;
}
