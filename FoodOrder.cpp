#include "FoodOrder.h"

int FoodOrder::foodCount = 0;


FoodOrder::FoodOrder(std::string name, std::string date, std::string phone, float miles, std::string restaurantName)
                    :DeliveryOrder(name, date, phone, miles)
{
    this->restaurantName = restaurantName;
}


FoodOrder::~FoodOrder()
{
    std::cout << "FoodOrder destroyed.\n";
}

void FoodOrder::receipt() const
{
    DeliveryOrder::receipt();
    std::cout << "\tFood Count: " << FoodOrder::foodCount << std::endl;
}


float FoodOrder::VIPdiscount()
{
    float discountRate;
    if (foodCount > 10) discountRate = 0.8;
    else if (foodCount > 5) discountRate = 0.9;
    else if (foodCount > 2) discountRate = 0.95;
    else discountRate = 1;

    return discountRate;
}


void FoodOrder::addFood(std::string mealName, int sides = 0, bool isAddSoup = false)
{
    float price, cost;
    if (mealName == "Thick Cauliflower Steaks") price = 15;
    else if (mealName == "Rack of Lamb") price = 38;
    else if (mealName == "Organic Scottish Salmon") price = 23;
    else if (mealName == "Grilled Lobster Risotto") price = 46;
    else {}

    if (isAddSoup) cost = price + sides * 6 + 5;
    else cost = price + sides * 6;

    FoodOrder::foodCount++;
    DeliveryOrder::orderBalance += cost;
}
