#include "BobaOrder.h"

int BobaOrder::drinksCount = 0;


BobaOrder::BobaOrder(std::string name, std::string date, std::string phone, float miles, std::string shopName)
                    :DeliveryOrder(name, date, phone, miles)
{
    this->shopName = shopName;
}


BobaOrder::~BobaOrder()
{
    std::cout << "BobaOrder destroyed.\n";
}

void BobaOrder::receipt() const
{
    DeliveryOrder::receipt();
    std::cout << "\tDrinks Count: " << BobaOrder::drinksCount << std::endl;
}


float BobaOrder::VIPdiscount()
{
    float discountRate;
    if (drinksCount > 10) discountRate = 0.8;
    else if (drinksCount > 5) discountRate = 0.9;
    else if (drinksCount > 2) discountRate = 0.95;
    else discountRate = 1;

    return discountRate;
}


void BobaOrder::addDrink(std::string drinkName, bool isAddBoba = true, int sameDrinkCount = 1)
{
    float price, cost;
    if (drinkName == "Green Tea Latte") price = 5.8;
    if (drinkName == "Brown Sugar Boba Milk") price = 7.8;
    if (drinkName == "Brown Sugar Pearl Milk") price = 9.8;

    if (isAddBoba) cost = (price + 1) * sameDrinkCount;
    else cost = price * sameDrinkCount;

    BobaOrder::drinksCount += sameDrinkCount;
    DeliveryOrder::orderBalance += cost;
}
