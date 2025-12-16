#include "number_systems.hpp"

namespace number_systems{

    BinaryNumber::BinaryNumber(const std::string& binary_input) : value(binary_input) {}
	    
    std::string BinaryNumber::getBinary() const { return value; }
    void BinaryNumber::setBinary(const std::string& binary_input) { value = binary_input ;} 
    
    
    std::string BinaryNumber::toDecimal() const{
        
        return binaryToDecimal(value);
    }
    std::string BinaryNumber::toHex() const{
       
        return binaryToHex(value);
    }

    std::string binaryToDecimal(const std::string& binary_input){
	
	int res = 0;
	
        int B_ASCII = (int)'0';
	for(int i = binary_input.length() - 1; i >= 0 ; i--){
		
            res += pow(2, -i + binary_input.length() - 1) * ((int)binary_input[i] - B_ASCII);
	}
        return std::to_string(res);
    }

    std::string binaryToHex(const std::string& binary_input){
        
        std::string res = "";
        std::string hexTable = "0123456789ABCDEF";
	int bits_length = binary_input.length();
        
	for(int i = bits_length / 4; i >= 0 ; i-- ){
	    res += hexTable[std::stoi(binaryToDecimal( 
			  std::string(1,binary_input[(bits_length-4)-(4*i)]) +
                          std::string(1,binary_input[(bits_length-3)-(4*i)]) + 
			  std::string(1,binary_input[(bits_length-2)-(4*i)]) +
                          std::string(1,binary_input[(bits_length-1)-(4*i)])  
			  ))];
	    
	}
        return res;
    }

}
