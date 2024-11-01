/*
==============================================================================
   File Name          : BobaOrder.cpp
   Student Name       : JJ Li
   Last Modified Date : 10/31/2024
   Description        : 
     This file implements the `BobaOrder` class, which represents an order 
     of boba drinks. The class includes methods to add drinks, calculate 
     discounts for VIP accounts, and print receipts.

   Classes:
     - BobaOrder: Inherits from `DeliveryOrder`. Manages boba drink orders, 
                  keeps track of the total drinks count, and applies 
                  appropriate discounts based on the number of drinks ordered.

============================================================================== 
*/

#include "BobaOrder.h"

// Static variable to track the total number of drinks ordered
int BobaOrder::drinksCount = 0;

// Constructor to initialize a boba order with specific details
BobaOrder::BobaOrder(std::string name, std::string date, std::string phone, float miles, std::string shopName)
                    :DeliveryOrder(name, date, phone, miles)
{
    this->shopName = shopName;
}


// Destructor that outputs a message when the BobaOrder is destroyed
BobaOrder::~BobaOrder()
{
    std::cout << "BobaOrder destroyed.\n";
}

// Method to print the receipt for the boba order
void BobaOrder::receipt() const
{
    DeliveryOrder::receipt();   // Call the base class receipt method
    std::cout << "\tDrinks Count: " << BobaOrder::drinksCount << std::endl;
}


// Method to calculate the VIP discount based on the number of drinks ordered
float BobaOrder::VIPdiscount()
{
    float discountRate;
    if (drinksCount > 10) discountRate = 0.8;
    else if (drinksCount > 5) discountRate = 0.9;
    else if (drinksCount > 2) discountRate = 0.95;
    else discountRate = 1;

    return discountRate;
}


// Method to add a drink to the order
void BobaOrder::addDrink(std::string drinkName, bool isAddBoba, int sameDrinkCount)
{
    float price, cost;

    // Set the price based on the drink name
    if (drinkName == "Green Tea Latte") price = 5.8;
    if (drinkName == "Brown Sugar Boba Milk") price = 7.8;
    if (drinkName == "Brown Sugar Pearl Milk") price = 9.8;

    // Calculate the cost based on whether boba is added
    if (isAddBoba) cost = (price + 1) * sameDrinkCount;
    else cost = price * sameDrinkCount;

    // Update the total drinks count and order balance
    BobaOrder::drinksCount += sameDrinkCount;
    DeliveryOrder::orderBalance += cost;
}
