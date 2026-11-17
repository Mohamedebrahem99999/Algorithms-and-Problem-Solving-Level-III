#include <string>
#pragma once
std::string USERCHOICES [] = {"Show Client List.", "Add New Client", "Delete Client", "Update Client Info", "Find Client", "Transactions", "Exit"};
std::string DATASEP = "#//#";
enum enUserChoices{Show_Client_List = 1, Add_New_Client = 2, Delete_Client = 3, Update_Client_Info = 4, Find_Client = 5, Transactions = 6, Exit = 7};
enum enTransactionChoice {Deposit_Choice = 1, Withdraw_Choice = 2, Transactions_View = 3, Main_Menu_Screen = 4};
std::string TRANSACTIONSCHOICES [] = {"Deposit", "Withdraw", "Transactions View", "Main Menu Screen"};
struct stClinetData
{
    std::string AccountNumber;
    std::string PinCode;
    std::string Name;
    std::string Phone;
    double AccountBalance;
};