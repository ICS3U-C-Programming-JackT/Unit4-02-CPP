// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: April 10, 2025
// Factorial program in c++

#include <iostream>
#include <string>

int main() {

    // Create variables for product, counter and user number
    int product = 1;
    int counter = 0;

    std::string userNumString = "";
    std::cout << "Enter an integer above or equal to 0: ";
    std::cin >> userNumString;

    int userNumInt;

    try {

        // Convert user number to integer
        userNumInt = std::stoi(userNumString);

        if (userNumInt >= 0) {
            
            // Increment counter and product in loop
            while (userNumInt > counter) {
                counter += 1;
                product *= counter;
            }

            // Display product
            std::cout << "\nYour factorial number is " << product << "\n";
        } else {
            std::cout << "\nYou MUST enter a number larger or equal to 0" 
            << "\n";
            main();
        }
        
    } catch (std::invalid_argument) {

        // Display error in case of string entered
        std::cout << "Please make sure to enter a number, not a string!"
        << "You entered " << userNumString;
        main();
    }
}
