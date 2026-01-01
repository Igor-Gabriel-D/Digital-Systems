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
	/*
	 * @brief Returns the hexadecimal number of value
	 * */
	std::string toHex() const;

    };

    /**
     * @class HexNumber
     * @brief Represents a hexadecimal number using a string representation.
     *
     * This class encapsulates a hexadecimal number (base 16) stored as a string,
     * allowing safe access and modification of its value.
     */
    class HexNumber{
    private:
        std::string value;
    public:
	/**
	 * @brief Constructs a HexNumber object.
	 * @param hex_input A string repressenting a hexadecimal number.
	 * */
	HexNumber(const std::string& hex_input);
	/**
         * @brief Returns the hexadecimal representation.
         * @return The hexadecimal number as a string.
         */
	std::string getHex() const;
        /**
         * @brief Sets a new hexadecimal value.
         * @param binary_input A string representing a hexadecimal number.
         */
	void setHex(const std::string& hex_input);
	
	/*
	 * @brief Returns the decimal number of value
	 * */
	std::string toDecimal() const;
	/*
	 * @brief Returns the binary number of value
	 * */
	std::string toBinary() const;
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
    std::string binaryToHex    (std::string binary_input);
    
     /*
     * @brief Converts a hexadecimal number to a decimal number.
     * @param binary_input A string representing a hexadecimal number.
     * */
    std::string hexToDecimal   (const std::string& hex_input);
     /*
     * @brief Converts a hexadecimal number to a binary number.
     * @param binary_input A string representing a hexadecimal number.
     * */
    std::string hexToBinary    (const std::string& hex_input);
}

#endif
