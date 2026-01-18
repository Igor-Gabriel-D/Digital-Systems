#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    bool A = false;
    bool B = false;

    cout << "| A | B | out |" << endl;
    cout << "---------------" << endl;
    for(int i = 0; i < 2; i++){
    	for(int j = 0; j < 2; j++){
	    cout << "| " << i << " | " << j << " | " << (A && B) << " |" << endl;
            B = !B;
	}
	A = !A;
    }

    return 0;
}
