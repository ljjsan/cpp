/*
==============================================================================
   File Name          : DeliveryOrder.cpp
   Student Name       : JJ Li
   Last Modified Date : 10/31/2024
   Description        : 
     This file implements the `DeliveryOrder` class, which manages delivery 
     orders. It keeps track of order details such as the customer's name, 
     date, phone number, distance, and total balance. The class also provides 
     methods for calculating the total order balance, printing receipts, and 
     maintaining a count of total orders.

   Classes:
     - DeliveryOrder: Represents a delivery order with properties for name, 
                      date, phone, miles, and order balance. It includes 
                      methods to retrieve the total balance and print 
                      order details.

============================================================================== 
*/


#include "DeliveryOrder.h"
#include <iostream>
#include <string>

// Initializing Static variable
int DeliveryOrder::orderCount = 0;
float DeliveryOrder::taxRate = 0.09;
float DeliveryOrder::deliveryRate = 2;

// Constructor to initialize a delivery order
DeliveryOrder::DeliveryOrder(std::string name, std::string date, std::string phone, float miles)
{
    this->name = name;
    this->date = date;
    this->phone = phone;
    this->miles = miles;
    this->orderBalance = 0;

    DeliveryOrder::orderCount++;
}


// Destructor that outputs a message when the DeliveryOrder is destroyed
DeliveryOrder::~DeliveryOrder()
{
    std::cout << "DeliveryOrder destroyed.\n";
}


// Method to print the receipt for the delivery order
void DeliveryOrder::receipt() const
{
    std::cout << "Order Detail:" << "\n";
    std::cout << "\tName: " << name << "\n";
    std::cout << "\tDate: " << date << "\n";
    std::cout << "\tPhone: " << phone << "\n";
    std::cout << "\tOrder Balance: $" << orderBalance << std::endl;
}


// Method to calculate the total balance including tax and delivery fees
float DeliveryOrder::getTotalBalance() const
{
    return orderBalance * (1 + taxRate) + miles * deliveryRate;
}


// Static method to retrieve the total count of orders placed
int DeliveryOrder::getOrderCount()
{
    return DeliveryOrder::orderCount;
}
