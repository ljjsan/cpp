#ifndef BOBAORDER_H
#define BOBAORDER_H

#include <string>
#include <iostream>
#include "DeliveryOrder.h"

class BobaOrder : public DeliveryOrder
{
    private:
        std::string shopName;
        static int drinksCount;

    public:
        BobaOrder(std::string, std::string, std::string, float, std::string);
        ~BobaOrder();

        void receipt() const;
        float VIPdiscount() override;
        void addDrink(std::string, bool, int);

};

#endif
