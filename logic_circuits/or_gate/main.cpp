#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    bool A = false;
    bool B = false;

    cout << "| A | B | out |" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "| " << A << " | " << B << " | " << (A || B) << "   |" << endl;
	    B = !B; 
	}
	A = !A; 
    }

    return 0;
}
