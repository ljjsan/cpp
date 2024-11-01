/*
==============================================================================
   File Name          : Account.h
   Student Name       : JJ Li
   Last Modified Date : 10/31/2024
   Description        : 
     This file defines the `Account` class, which represents a user account 
     with a username and status. The class provides functionality to retrieve 
     the account status and manage user accounts.

   Classes:
     - Account: Represents a user account with properties for username and 
                status. Includes a constructor for initialization and a 
                method to get the status of the account.

============================================================================== 
*/


#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>


class Account
{
    private:
        std::string username;
        std::string status;
               
    public:
        // Constructor that initializes the account with a username and an optional status
        Account(std::string username, std::string status = "Regular");
        // Destructor that outputs a message upon destruction of an Account object
        ~Account();

        // Method to retrieve the status of the account
        std::string getStatus() const;
};

#endif
