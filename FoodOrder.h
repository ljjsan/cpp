/*
==============================================================================
   File Name          : FoodOrder.h
   Student Name       : JJ Li
   Last Modified Date : 10/31/2024
   Description        : 
     This file defines the `FoodOrder` class, which inherits from the 
     `DeliveryOrder` class. It represents a specific type of delivery order 
     for food items and includes functionalities for managing food orders, 
     applying discounts, and generating receipts.

   Classes:
     - FoodOrder: Inherits from `DeliveryOrder`. Manages food orders with 
                  properties for the restaurant name and a static count of 
                  food items ordered. Provides methods to add food, calculate 
                  VIP discounts, and print order receipts.

============================================================================== 
*/


#ifndef FOODORDER_H
#define FOODORDER_H

#include "DeliveryOrder.h"

class FoodOrder : public DeliveryOrder
{
    private:
    std::string restaurantName; // Name of the restaurant
    static int foodCount;       // Static count of food items ordered

    public:
        // Constructor to initialize a food order with specific details
        FoodOrder(std::string, std::string, std::string, float, std::string);
        // Destructor that outputs a message upon destruction of a FoodOrder object
        ~FoodOrder();

        // Method to print the receipt for the food order
        void receipt() const;
        // Method to calculate the VIP discount for the food order
        float VIPdiscount() override;
        // Method to add food items to the order
        void addFood(std::string, int, bool);
};

#endif
