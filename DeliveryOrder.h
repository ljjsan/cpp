#ifndef DELIVERYORDER_H
#define DELIVERYORDER_H

#include <string>
#include <iostream>

class DeliveryOrder
{
    private:
        std::string name;
        std::string date;
        std::string phone;
        float miles;
        
        static int orderCount;
        static float taxRate, deliveryRate;

    protected:
        float orderBalance;

    public:
        DeliveryOrder(std::string name, std::string date, std::string phone, float miles);
        ~DeliveryOrder();

        void receipt() const;
        float getTotalBalance() const;
        static int getOrderCount();
        virtual void VIPdiscount() = 0;
};



# endif
