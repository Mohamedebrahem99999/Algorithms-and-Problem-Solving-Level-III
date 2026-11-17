#include <iostream>
#include <fstream>
#include "Bank_Functions_Library.h"
#include <iomanip>
#include <vector>
#include "../input.h"
#include "../vector_lib.h"
#include "../string_lib.h"
#include "output_print.h"
#pragma once

stClinetData findByAccountNumber(const std::string &AccountNumber, const std::string FilePath = "Clients.txt");

std::string convertDataRecordToOneLine(const stClinetData &ClientData)
{
    return ClientData.AccountNumber + DATASEP + ClientData.PinCode + DATASEP + ClientData.Name + DATASEP + ClientData.Phone + DATASEP + std::to_string(ClientData.AccountBalance);
}

stClinetData fillstClintData(const std::string FilePath = "Clients.txt")
{
    stClinetData ClinetData;

    std::cout << "Please Enter Client Data:\n";

    
    ClinetData.AccountNumber = getText("Enter Account Number? ");
    
    if (findByAccountNumber(ClinetData.AccountNumber,FilePath).AccountNumber != "")
    {
        std::cout << "This Account Number Already Exists\n";
        return {};
    }

    ClinetData.PinCode = getText("Enter PinCode? ");
    ClinetData.Name = getText("Enter Name? ");
    ClinetData.Phone = getText("Enter Phone Number? ");
    std::cout << "Enter the account balance ";
    std::cin >> ClinetData.AccountBalance;
    
    return ClinetData;
}

void saveClientDataToFile(std::string DataLine)
{
    std::fstream MyFile;
    MyFile.open("Clients.txt",std::ios::app | std::ios::out);
    if(MyFile.is_open())
    {
        MyFile << DataLine << "\n";
        MyFile.close();
    }
}

void addClients()
{
    bool AddMore = true;
    stClinetData ClientData;
    do {
        ClientData = fillstClintData();

        if (ClientData.AccountNumber == "")
            continue;
        std::string DataLine = convertDataRecordToOneLine(ClientData);
        saveClientDataToFile(DataLine);

        AddMore = (bool)readNumberInRange(1,0,"Do you want to add more numbers? (0 if no 1 if yes): ");
    }while(AddMore);
}


stClinetData fillstClintData(const std::vector<std::string> &vDataElements);
std::vector <stClinetData> LoadClientsDataToVector(const std::string &FileName)
{
    std::vector <stClinetData> vClients;

    std::fstream MyFile;
    MyFile.open(FileName,std::ios::in);
    if(MyFile.is_open())
    {
        std::string Line;
        std::vector <std::string> vDataElements;
        stClinetData ClientData;
        while (std::getline(MyFile,Line))
        {
            vDataElements = Split(Line,"#//#");
            ClientData = fillstClintData(vDataElements);
            vClients.push_back(ClientData);
        }
        MyFile.close();
    }
    return vClients;
}

stClinetData findByAccountNumber(const std::string &AccountNumber, std::string FilePath )
{
    std::vector<stClinetData> vClientsData = LoadClientsDataToVector(FilePath);
    for (const stClinetData &ClientData: vClientsData)
    {
        if (ClientData.AccountNumber == AccountNumber)
            return ClientData;
    }
    return {};
}

void overrideDataInFile(std::string FilePath,std::vector<stClinetData> vRecords)
{
    std::fstream MyFile;
    MyFile.open(FilePath, std::ios::out);
    if(MyFile.is_open())
    {
        for(stClinetData ClientData: vRecords)
        {
            MyFile << convertDataRecordToOneLine(ClientData) << "\n";
        }
        MyFile.close();
    }
}

void deleteRecordFromFile(std::string FilePath)
{
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
    std::cout << std::right << std::setfill(' ') << std::setw(28) << "Delete Client Screen" << std::endl;
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
    std::string AccountNumber = getText("Please enter AccountNumber to delete? ");
    std::vector <stClinetData> vRecords = LoadClientsDataToVector(FilePath);
    std::vector <stClinetData> vUpdatedRecords;
    bool IsFound = false;
    char IsSure;
    for (stClinetData ClientData: vRecords)
    {
        if (ClientData.AccountNumber == AccountNumber)
        {
            IsFound = true;
            printClientRecord(ClientData);
            std::cout << "Are you sure you want to delete this record ?[Y/N] ";
            std::cin >> IsSure;
            if(toupper(IsSure) == 'Y')
                continue;
        }
        vUpdatedRecords.push_back(ClientData);
    }
    if (!IsFound)
    {
        std::cout << "No Clients Found\n";
        return;
    }
    if (toupper(IsSure) == 'Y')
    {
        overrideDataInFile(FilePath,vUpdatedRecords);
        std::cout << "Record Deleted Successfully !\n";
        return;
    }
    std::cout << "Record found but was not deleted\n";
}
void changeClientData(std::string AccountNumber, stClinetData &ClinetData)
{
    std::cout << "Please Enter Client Data:\n";
    ClinetData.PinCode = getText("Enter PinCode? ");
    ClinetData.Name = getText("Enter Name? ");
    ClinetData.AccountBalance = readNumber("Enter the account balance ");
}
void updateRecord(const std::string &FilePath)
{
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
    std::cout << std::right << std::setfill(' ') << std::setw(28) << "Update Client Screen" << std::endl;
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;

    std::string AccountNumber;
    stClinetData ClientData;
    while (true)
    {
        AccountNumber = getText("Please enter AccountNumber to update? ");
        ClientData = findByAccountNumber(AccountNumber);
        if (ClientData.AccountNumber != "")
            break;
        std::cout << "No Client with such Account Number\n";
    }

    std::vector <stClinetData> vRecords = LoadClientsDataToVector(FilePath);
    char IsSure;
    for (stClinetData &ClientData: vRecords)
    {
        if (ClientData.AccountNumber == AccountNumber)
        {
            printClientRecord(ClientData);
            std::cout << "Are you sure you want to update this record ?[Y/N] ";
            std::cin >> IsSure;
            if (toupper(IsSure) == 'Y')
                changeClientData(AccountNumber,ClientData);
            break;
        }
    }
    
    if (IsSure)
    {
        overrideDataInFile(FilePath,vRecords);
        std::cout << "Data Updated Successfully";
        return;
    }
    std::cout << "Client Data But Was Not Updated";
}

stClinetData fillstClintData(const std::vector<std::string> &vDataElements)
{
    stClinetData ClientData;
    ClientData.AccountNumber = vDataElements[0];
    ClientData.PinCode = vDataElements[1];
    ClientData.Name = vDataElements[2];
    ClientData.Phone = vDataElements[3];
    ClientData.AccountBalance = std::stod(vDataElements[4]);
    return ClientData;
}

void addToBalance(stClinetData &ClientData,double AmmountToDeposit)
{
    ClientData.AccountBalance += AmmountToDeposit;
}

void Deposit(const std::string& FilePath)
{
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
    std::cout << std::right << std::setfill(' ') << std::setw(28) << "Deposit Screen" << std::endl;
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
    std::string AccountNumber;
    stClinetData ClientData;
    while (true)
    {
        AccountNumber = getText("Please enter AccountNumber to update? ");
        ClientData = findByAccountNumber(AccountNumber);
        if (ClientData.AccountNumber != "")
            break;
        std::cout << "No Client with such Account Number\n";
    }
    
    char C;
    
    double BalanceToDeposit;
    std::vector<stClinetData> vRecords = LoadClientsDataToVector(FilePath);
    for (stClinetData &ClientData : vRecords)
    {
        if (ClientData.AccountNumber == AccountNumber)
        {
            printClientRecord(ClientData);
            BalanceToDeposit = readNumber("Enter the amount to deposit ");
            std::cout << "Are You Sure To Deposite? [Y/N]";
            std::cin >> C;
            if(toupper(C) != 'Y')
            {
                std::cout << "Deposit was not completed successfully\n";
                return;
            }
            addToBalance(ClientData,BalanceToDeposit);
            break;
        }
    }
    overrideDataInFile(FilePath,vRecords);
}

void subtractFromBalance(stClinetData &ClientData,double AmmountToDeposit)
{
    ClientData.AccountBalance -= AmmountToDeposit;
}

void Withdraw(const std::string& FilePath)
{
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
    std::cout << std::right << std::setfill(' ') << std::setw(28) << "Withdraw Screen" << std::endl;
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
    std::string AccountNumber;
    stClinetData ClientData;
    while (true)
    {
        AccountNumber = getText("Please enter AccountNumber to update? ");
        ClientData = findByAccountNumber(AccountNumber);
        if (ClientData.AccountNumber != "")
            break;
        std::cout << "No Client with such Account Number\n";
    }

    char C;
    double BalanceToWithDraw;
    std::vector<stClinetData> vRecords = LoadClientsDataToVector(FilePath);
    for (stClinetData &ClientData : vRecords)
    {
        if (ClientData.AccountNumber == AccountNumber)
        {
            printClientRecord(ClientData);
            
            while(true)
            {
                BalanceToWithDraw = readNumber("Enter the amount to withdraw ");
                if (BalanceToWithDraw < ClientData.AccountBalance)
                    break;
                std::cout << "No sufficient balance\n";
            }
            std::cout << "Are You Sure To Withdraw?";
            std::cin >> C;
            if(toupper(C) != 'Y')
            {
                std::cout << "Withdrawl was not completed successfully\n";
                return;
            }
            subtractFromBalance(ClientData,BalanceToWithDraw);
            break;
        }
    }
    overrideDataInFile(FilePath,vRecords);
}

void runTransactionEngine(std::string FilePath)
{
    printTransactionScreen();
    enTransactionChoice TransactionChoice = (enTransactionChoice)readNumberInRange(4,1,"Choose What do you want to do? [1 to 4]: ");
    
    switch(TransactionChoice)
    {
        case enTransactionChoice::Deposit_Choice:
            Deposit(FilePath);
            break;
        case enTransactionChoice::Withdraw_Choice:
            Withdraw(FilePath);
            break;
        case enTransactionChoice::Transactions_View:
        {
            std::vector <stClinetData> vRecords = LoadClientsDataToVector(FilePath);
            printTransactions(vRecords);
            break;
        }
            
        case enTransactionChoice::Main_Menu_Screen:
            break;
    }
    return;
}