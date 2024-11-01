#include "DeliveryOrder.h"
// #include <iostream>
// #include <string>

float DeliveryOrder::taxRate = 0.09;
float DeliveryOrder::deliveryRate = 2;

DeliveryOrder::DeliveryOrder(std::string name, std::string date, std::string phone, float miles)
{
    this->name = name;
    this->date = date;
    this->phone = phone;
    this->miles = miles;
    this->orderBalance = 0;

    DeliveryOrder::orderCount++;
}


DeliveryOrder::~DeliveryOrder()
{
    std::cout << "DeliveryOrder destroyed.\n";
}


void DeliveryOrder::receipt() const
{
    std::cout << "Order Detail:" << "\n";
    std::cout << "\tName: " << name << "\n";
    std::cout << "\tDate: " << date << "\n";
    std::cout << "\tPhone: " << phone << "\n";
    std::cout << "\tOrder Balance: $" << orderBalance << std::endl;
}


float DeliveryOrder::getTotalBalance() const
{
    return orderBalance * (1 + taxRate) + miles * deliveryRate;
}

int DeliveryOrder::getOrderCount()
{
    return DeliveryOrder::orderCount;
}
