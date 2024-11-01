#ifndef FOODORDER_H
#define FOODORDER_H

#include "DeliveryOrder.h"

class FoodOrder : public DeliveryOrder
{
    private:
    std::string restaurantName;
    static int foodCount;

    public:
        FoodOrder(std::string, std::string, std::string, float, std::string);
        ~FoodOrder();

        void receipt() const;
        float VIPdiscount() override;
        void addFood(std::string, int, bool);
};

#endif
