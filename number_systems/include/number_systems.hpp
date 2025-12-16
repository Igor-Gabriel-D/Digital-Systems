#ifndef	NUMBER_SYSTEMS_H
#define NUMBER_SYSTEMS_H

#include <string>
#include <iostream>
#include <cmath>

namespace number_systems{
    
    /**
     * @class BinaryNumber
     * @brief Represents a binary number using a string representation.
     *
     * This class encapsulates a binary number (base 2) stored as a string,
     * allowing safe access and modification of its value.
     */
    class BinaryNumber {
    private:
        std::string value;

    public:

	/**
         * @brief Constructs a BinaryNumber object.
         * @param binary_input A string representing a binary number.
         */
	BinaryNumber(const std::string& binary_input);
        
	/**
         * @brief Returns the binary representation.
         * @return The binary number as a string.
         */
	std::string getBinary() const;	
        /**
         * @brief Sets a new binary value.
         * @param binary_input A string representing a binary number.
         */
	void setBinary(const std::string& binary_input);
        
	/*
	 * @brief Returns the decimal number of value
	 * */
	std::string toDecimal() const;

    };

    /**
     * @brief Converts a binary number to a decimal number.
     * @param binary_input A string representing a binary number.
     */
    std::string binaryToDecimal(const std::string& binary_input);
    /*
     * @brief Converts a binary number to a hexadecimal number.
     * @param binary_input A string representing a binary number.
     * */
    std::string binaryToHex    (const std::string& binary_input);

}

#endif
