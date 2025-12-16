#include "number_systems.hpp"

namespace number_systems{

    BinaryNumber::BinaryNumber(const std::string& binary_input) : value(binary_input) {}
	    
    std::string BinaryNumber::getBinary() const { return value; }
    void BinaryNumber::setBinary(const std::string& binary_input) { value = binary_input ;} 
    
    std::string BinaryNumber::toDecimal() const{
        
        return binaryToDecimal(value);
    }

    std::string binaryToDecimal(const std::string& binary_input){
	
	int res = 0;
	
        int B_ASCII = (int)'0';
	for(int i = binary_input.length() - 1; i >= 0 ; i--){
		
            res += pow(2, -i + binary_input.length() - 1) * ((int)binary_input[i] - B_ASCII);
	}

        return std::to_string(res);
    }
}
