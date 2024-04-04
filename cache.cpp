#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class cache {

};

int main(int argc, char *argv[]) {
    int hexValue;
    
    // Prompt the user to enter a hexadecimal value
    cout << "Enter a hexadecimal value: ";
    
    // Read the hexadecimal value
    cin >> hex >> hexValue;
    
    // Output the hexadecimal value
    cout << "You entered: " << hexValue << endl;

    int leastSignificantBits = hexValue & 0xF; // Mask with 0xF (binary 1111)
    
    // Output the result
    cout << "The four least significant bits are: " << leastSignificantBits << endl;

    return 0;
}