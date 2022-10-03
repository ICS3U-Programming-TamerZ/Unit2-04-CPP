// Copyright (c) 2022 Tamer Zreg All rights reserved.
//
// Created by: Tamer Zreg
// Date: Sep 27, 2022
// This program asks the user for the diameter and then
// displays the cost of a pizza with the given variables.
#include <iostream>

int main() {
    // declare constants
    const float HST = 0.13;
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGRED_COST = 1.5;

    // declare variables
    float diameter, subtotal;

    // get the diameter from the user
    std::cout << "Enter the diameter (mm): ";
    std::cin >> diameter;

    // calculate the subtotal
    subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;

    // display the subtotal to the user
    std::cout << "\n";
    std::cout << "subtotal = " << subtotal << " $" << std::endl;
}
