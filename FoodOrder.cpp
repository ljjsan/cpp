/*
==============================================================================
   File Name          : FoodOrder.cpp
   Student Name       : JJ Li
   Last Modified Date : 10/31/2024
   Description        : 
     This file implements the `FoodOrder` class, which manages food delivery 
     orders. It tracks order details such as the restaurant name and the 
     number of food items ordered. The class also provides methods for 
     adding food items, calculating discounts for VIP accounts, and printing 
     receipts.

   Classes:
     - FoodOrder: Inherits from `DeliveryOrder`. Manages food orders, keeps 
                  track of the total food count, and applies discounts based 
                  on the number of food items ordered.

============================================================================== 
*/

// Static variable to keep track of the total number of food items ordered
#include "FoodOrder.h"

int FoodOrder::foodCount = 0;

// Constructor to initialize a food order with specific details
FoodOrder::FoodOrder(std::string name, std::string date, std::string phone,
                    float miles, std::string restaurantName)
                    :DeliveryOrder(name, date, phone, miles)
{
    this->restaurantName = restaurantName;
}


// Destructor that outputs a message when the FoodOrder is destroyed
FoodOrder::~FoodOrder()
{
    std::cout << "FoodOrder destroyed.\n";
}


// Method to print the receipt for the food order
void FoodOrder::receipt() const
{
    DeliveryOrder::receipt();
    std::cout << "\tFood Count: " << FoodOrder::foodCount << std::endl;
}


// Method to calculate the VIP discount
float FoodOrder::VIPdiscount()
{
    float discountRate;
    if (orderBalance > 50) discountRate = 0.8;
    else if (orderBalance > 30) discountRate = 0.9;
    else if (orderBalance > 20) discountRate = 0.95;
    else discountRate = 1;

    return discountRate;
}


// Method to add food items to the order
void FoodOrder::addFood(std::string mealName, int sides = 0, bool isAddSoup = false)
{
    float price, cost;

    // Set the price based on the meal name
    if (mealName == "Thick Cauliflower Steaks") price = 15;
    else if (mealName == "Rack of Lamb") price = 38;
    else if (mealName == "Organic Scottish Salmon") price = 23;
    else if (mealName == "Grilled Lobster Risotto") price = 46;
    else {}

    // Calculate the cost based on whether soup is added
    if (isAddSoup) cost = price + sides * 6 + 5;
    else cost = price + sides * 6;

    FoodOrder::foodCount++; // Increment the total food count
    DeliveryOrder::orderBalance += cost;    // Update the order balance with the new cost
}
