#include "number_systems.hpp"

namespace number_systems{

    BinaryNumber::BinaryNumber(const std::string& binary_input) : value(binary_input) {}
    
    std::string BinaryNumber::getBinary() const { return value; }
    void BinaryNumber::setBinary(const std::string& binary_input) { value = binary_input ;} 
    
    
    std::string BinaryNumber::toDecimal() const{ return binaryToDecimal(value); }
    std::string BinaryNumber::toHex() const{ return binaryToHex(value); }

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
	int input_length = binary_input.length();

	if(input_length%4 != 0){
	    res += hexTable[(std::stoi(binaryToDecimal(binary_input)) >> ( (input_length/4 ) * 4 ) )];
	}
	for(int i = input_length / 4; i >= 0 ; i-- ){
	    res += hexTable[std::stoi(binaryToDecimal( 
			  std::string(1,binary_input[(input_length-4)-(4*i)]) +
                          std::string(1,binary_input[(input_length-3)-(4*i)]) + 
			  std::string(1,binary_input[(input_length-2)-(4*i)]) +
                          std::string(1,binary_input[(input_length-1)-(4*i)])  
			  ))];
	    
	}
        return res;
    }

    // ================================================================================================================================

    HexNumber::HexNumber(const std::string& hex_input) : value(hex_input) {}

    std::string HexNumber::getHex() const {return value;}
    void HexNumber::setHex(const std::string& hex_input)  { value = hex_input; }

    std::string hexToDecimal(const std::string& hex_input){
        int res = 0;
	int input_length = hex_input.length();

	std::string H_STRING = "0123456789ABCDEF";
	
	for(int i = 0; i < input_length; i++){
            char digit = hex_input[ (input_length - 1) - i  ]; 
	    for(int j = 0; j < 16; j++){
		if(H_STRING[j] == digit ){
		    res += pow(16, i) * j;
		    break;
		}
	    }

	}
	return std::to_string(res);
    }

    std::string hexToBinary(const std::string& hex_input){
        
        return "  ";
    }

}
