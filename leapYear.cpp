// Copyright (c) 2021 Alexander Matheson All rights reserved.

// Created by: Alexander Matheson
// Created on: Dec 16, 2021
// This program gets the user to enter a year.
// It then tells the user if that year is a leap year.
#include <iostream>


int main() {
    // set variables
    std::string yearString;
    int year;

    // get user input
    std::cout << "Enter a year: ";
    std::getline(std::cin, yearString);

    // error checking
    try {
        year = std::stoi(yearString);
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, must be an integer";
        return 0;
    }

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                std::cout << year << " is a leap year.";
            } else {
                std::cout << year << " is not a leap year.";
            }
        } else {
            std::cout << year << " is a leap year.";
        }
    } else {
        std::cout << year << " is not a leap year.";
    }
}
