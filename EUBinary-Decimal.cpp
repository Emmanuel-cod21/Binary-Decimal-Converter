/***********************************************************
* Author:       Emmanuel Uzoma
* Assignment:   Chapter 6 Programming Project 4
* Date:         October 26, 2024
* File name:    EUBinary-Decimal.cpp
* Purpose:      This program converts a binary number string
*               to its decimal equivalent. It includes input
*               validation and uses the mathematical process
*               of converting binary to decimal by multiplying
*               each digit by its corresponding power of 2.
************************************************************/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Function prototype
int bin2Dec(const string& binaryString);
bool isValidBinary(const string& binaryString);

int main() {
    string binaryInput;
    
    // Prompt user for input
    cout << "Enter a binary number: ";
    cin >> binaryInput;
    
    // Validate input before conversion
    if (!isValidBinary(binaryInput)) {
        cout << "Error: Invalid binary number. Please use only 0s and 1s." << endl;
        return 1;
    }
    
    // Convert and display result
    int decimalValue = bin2Dec(binaryInput);
    cout << "The decimal value is " << decimalValue << endl;
    
    return 0;
}

/**
 * Converts a binary string to its decimal equivalent
 * @param binaryString The input binary number as a string
 * @return The decimal equivalent of the binary number
 */
int bin2Dec(const string& binaryString) {
    int decimal = 0;
    int power = 0;
    
    // Process string from right to left
    for (int i = binaryString.length() - 1; i >= 0; i--) {
        if (binaryString[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    
    return decimal;
}

/**
 * Validates if the input string contains only 0s and 1s
 * @param binaryString The input string to validate
 * @return true if string is valid binary, false otherwise
 */
bool isValidBinary(const string& binaryString) {
    for (char c : binaryString) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}