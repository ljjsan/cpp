#ifndef INVALIDINPUT_H
#define INVALIDINPUT_H

#include <iostream>
#include <string>
#include <exception>


class InvalidInput
{
    private:
        std::string input;
        const std::string message = "Invalid input \"" + input + "\".\n";
        

    public:
        InvalidInput(/* args */);
        ~InvalidInput();
};

InvalidInput::InvalidInput(/* args */)
{
}

InvalidInput::~InvalidInput()
{
}






#endif
