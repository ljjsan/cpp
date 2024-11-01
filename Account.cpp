/*
==============================================================================
   File Name          : Account.cpp
   Student Name       : JJ Li
   Last Modified Date : 11/1/2024
   Description        : 
     This file implements the `Account` class, which represents a user 
     account with a username and status. The class provides methods to 
     retrieve the account status and handles the destruction of account 
     instances.

   Classes:
     - Account: Represents a user account with properties for username 
               and status. Includes a destructor that outputs a message 
               when an account is removed.

============================================================================== 
*/


#include <iostream>
#include "Account.h"


// Constructor to initialize an account with username and status
Account::Account(std::string username, std::string status)
{
    this->username = username;
    this->status = status;
}


// Destructor that outputs a message when the account is removed
Account::~Account()
{
    std::cout << "Account removed.\n";
}


// Getter method to retrieve the account status
std::string Account::getStatus() const
{
    return this->status;
}
