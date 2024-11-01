/*
==============================================================================
   File Name          : DeliveryOrder.h
   Student Name       : JJ Li
   Last Modified Date : 10/31/2024
   Description        : 
     This file defines the `DeliveryOrder` class, which serves as the base 
     class for different types of delivery orders. It manages the details 
     of a delivery order, including customer information and order balance. 
     The class also provides functionality for generating receipts, 
     calculating total balances, and counting the number of orders.

   Classes:
     - DeliveryOrder: A base class for delivery orders. It contains common 
                      properties and methods for managing order details, 
                      calculating discounts, and printing receipts. It also 
                      defines a pure virtual method for calculating VIP 
                      discounts, which must be implemented by derived classes.

============================================================================== 
*/

#ifndef DELIVERYORDER_H
#define DELIVERYORDER_H

#include <string>
#include <iostream>

#include "Account.h"

class DeliveryOrder
{
    private:
        std::string name;   // Customer's name
        std::string date;   // Order date
        std::string phone;  // Customer's phone number
        float miles;        // Delivery distance in miles
        
        static int orderCount;  // Static count of total orders
        static float taxRate, deliveryRate; // Tax rate for orders and delivery fee per mile

    protected:
        float orderBalance; // Balance of the current order

    public:
        // Constructor to initialize a delivery order with specific details
        DeliveryOrder(std::string name, std::string date, std::string phone, float miles);
        // Destructor that outputs a message upon destruction of a DeliveryOrder object
        ~DeliveryOrder();
        // Method to print the receipt for the delivery order
        void receipt() const;
        // Method to calculate the total balance for the delivery order
        float getTotalBalance() const;        
        // Static method to get the total number of orders placed
        static int getOrderCount();
        // Pure virtual method to calculate the VIP discount (to be implemented by derived classes)
        virtual float VIPdiscount() = 0;
};

# endif
