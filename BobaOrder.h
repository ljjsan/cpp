/*
==============================================================================
   File Name          : BobaOrder.h
   Student Name       : JJ Li
   Last Modified Date : 10/31/2024
   Description        : 
     This file defines the `BobaOrder` class, which inherits from the 
     `DeliveryOrder` class. It represents a specific type of delivery order 
     for boba drinks and includes functionalities for managing boba drink 
     orders, applying discounts, and generating receipts.

   Classes:
     - BobaOrder: Inherits from `DeliveryOrder`. Manages boba drink orders 
                  with properties for the shop name and a static count of 
                  drinks. Provides methods to add drinks, calculate VIP 
                  discounts, and print order receipts.

============================================================================== 
*/


#ifndef BOBAORDER_H
#define BOBAORDER_H

#include <string>
#include <iostream>
#include "DeliveryOrder.h"

class BobaOrder : public DeliveryOrder
{
    private:
        std::string shopName;   // Name of the boba shop
        static int drinksCount; // Static count of drinks ordered

    public:
        // Constructor to initialize a boba order with specific details
        BobaOrder(std::string, std::string, std::string, float, std::string);
        // Destructor that outputs a message upon destruction of a BobaOrder object
        ~BobaOrder();

        // Method to print the receipt for the boba order
        void receipt() const;
        // Method to calculate the VIP discount for the boba order
        float VIPdiscount() override;
        // Method to add a drink to the boba order
        void addDrink(std::string drinkName, bool isAddBoba = true, int sameDrinkCount = 1);
};

#endif
