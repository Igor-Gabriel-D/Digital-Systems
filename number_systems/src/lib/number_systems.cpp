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

    std::string binaryToHex(std::string binary_input) {
        std::string res;
        const std::string hexTable = "0123456789ABCDEF";

        while (binary_input.length() % 4 != 0) {
            binary_input = "0" + binary_input;
        }

        int input_length = binary_input.length();

        for (int i = 0; i < input_length; i += 4) {
            int value =
                (binary_input[i]     - '0') << 3 |
                (binary_input[i + 1] - '0') << 2 |
                (binary_input[i + 2] - '0') << 1 |
                (binary_input[i + 3] - '0');

            res += hexTable[value];
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

    /*std::string hexToBinary(const std::string& hex_input){
	
        std::string res = "";
        int input_length = hex_input.length();

        std::string binary_list[] = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111" };
	std::string H_STRING = "0123456789ABCDEF";

	for(int i = 0; i < input_length; i++ ){
	    char digit = hex_input[ (input_length - 1) - i  ]; 

	    for(int j = 0; j < 16; j++){
	        if( digit  ==  H_STRING[j] ){
		    res += binary_list[j];
		}
	    }
	}

	return res;
    }*/

    

}
