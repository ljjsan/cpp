#ifndef INVALIDINPUT_H
#define INVALIDINPUT_H

#include <iostream>
#include <string>
#include <exception>


class InvalidInput
{
    private:
        std::string input;
        const std::string message;
        

    public:
        InvalidInput(std::string input) : message("Invalid input \"" + input + "\".\n")
        {};

        void reason() const {std::cout << message;}

};

#endif
