#include "include/number_systems.hpp"

namespace number_systems{

    BinaryNumber::BinaryNumber(const std::string& binary_input) : value(binary_input) {}
	    
    std::string BinaryNumber::getBinary() const { return value; }
    void BinaryNumber::setBinary(const std::string& binary_input) { value = binary_input ;} 
    
}
