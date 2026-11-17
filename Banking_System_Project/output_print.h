#include <iostream>
#include <iomanip>
#include <vector>
#include "global.h"
#pragma once
/*The Procedure Responsible For Printing the Main Menue on The Screen */
void printMainMenuScreen()
{
    system("clear");
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
    std::cout << std::right << std::setfill(' ') << std::setw(28) << "Main Menu Screen" << std::endl;
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
    for (int i = 0; i < sizeof(USERCHOICES)/sizeof(USERCHOICES[0]);i++)
    {
        printf("[%d] ",i+1);
        std::cout << USERCHOICES [i] << "\n";
    }
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
}
/*The Procedure Responsible For Printing the header of the Clients Data */
void printDataHeader()
{
    std::cout << std::setfill('_') << std::setw(50) << '_' <<std::endl;
    std::cout << " | " << std::left << std::setfill(' ') << std::setw(15) << "Account Number" << " | " << std::setw(10) << "Pin Codde" << " | " << std::setw(30) << "Client Name" << " | " << std::setw(10) << "Phone" << " | " <<  std::setw(10) << "Balance" << "\n";
    std::cout << std::setfill('_') << std::setw(50) << '_' <<std::endl;
}
/*The Procedure Responsible For Printing the Data Of All Clients */
void printClientsData(const std::vector <stClinetData> vClients)
{
    printDataHeader();
    for(stClinetData ClientData : vClients)
        std::cout << " | " << std::setfill(' ') << std::left << std::setw(15) << ClientData.AccountNumber << " | " << std::setw(10) << ClientData.PinCode << " | " << std::setw(30) << ClientData.Name << " | " << std::setw(10) << ClientData.Phone << " | " <<  std::setw(10) << ClientData.AccountBalance << "\n";
}
/*The Procedure Responsible for printing certain record in the Data*/
void printClientRecord(const stClinetData ClientData)
{
    if(ClientData.AccountNumber == "")
    {
        std::cout << "No Client with such account number \n";
        return;
    }
    std::cout << "Account Number: " << ClientData.AccountNumber << "\n";
    std::cout << "PinCode: " << ClientData.PinCode << "\n";
    std::cout << "Name: " << ClientData.Name << "\n";
    std::cout << "Phone: " << ClientData.Phone << "\n";
    std::cout << "Account Balance: " << ClientData.AccountBalance << "\n";
}

void printTransactionScreen()
{
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
    std::cout << std::setfill(' ') << std::setw(28) << "Transaction Menu Screen" << std::endl;
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
    for (int i = 0; i < sizeof(TRANSACTIONSCHOICES)/sizeof(TRANSACTIONSCHOICES[0]);i++)
    {
        printf("[%d] ",i+1);
        std::cout << TRANSACTIONSCHOICES[i] << "\n";
    }
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
}

void printTransactionsHeader()
{
    std::cout << std::setfill('_') << std::setw(50) << '_' <<std::endl;
    std::cout << " | " << std::left << std::setfill(' ') << std::setw(15) << "Account Number" << " | " << std::setw(10) << std::setw(30) << "Client Name" << " | " << std::setw(10) << "Balance" << "\n";
    std::cout << std::setfill('_') << std::setw(50) << '_' <<std::endl;
}

void printTransactions(const std::vector <stClinetData> vClients)
{
    printTransactionsHeader();
    double TotalBalance = 0;
    for(stClinetData ClientData : vClients)
    {
        std::cout << " | " << std::setfill(' ') << std::left << std::setw(15) << ClientData.AccountNumber << " | " << std::setw(30) << ClientData.Name << " | " << std::setw(10) <<  std::setw(10) << ClientData.AccountBalance << "\n";
        TotalBalance += ClientData.AccountBalance;
    }
    std::cout << std::setfill(' ') << std::setw(28) << "Total Balance = " << TotalBalance << std::endl;
    
}