// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program is the leap year checker

#include <iostream>
#include <string>

int main() {
    // This function adds all numbers 1 to the given integer.
    int loopCounter = 0;
    int total = 0;
    int userInput;
    std::string userInputString;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> userInputString;

    // process & output
    try {
        userInput = std::stoi(userInputString);

        if (userInput <= 0) {
            std::cout << "Invalid Input.";
        } else {
            while (loopCounter <= userInput) {
                total += loopCounter;
                loopCounter += 1;
            }
            std::cout << "The sum of all the positive numbers from 1 to "
            << userInput << " is " << total << "." << std::endl;
        }
    } catch(...) {
        std::cout << "Invalid Input.";
    }

    std::cout << "\nDone.";
}
