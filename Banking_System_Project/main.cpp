#include "output_print.h"
#include "../input.h"
#include "Bank_Functions_Library.h"
#include "File_Handling.h"
#include <cstdlib>

void findClientChoice()
{
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
    std::cout << std::setfill(' ') << std::setw(28) << "Find Client Screen" << std::endl;
    std::cout << std::setfill('=') << std::setw(40) << '=' << std::endl;
    std::string AccountNumber = getText("Please enter AccountNumber to Find? ");
    printClientRecord(findByAccountNumber(AccountNumber));
}

bool mapUserInput(enUserChoices UserChoices)
{
    switch (UserChoices)
    {
        case enUserChoices::Show_Client_List:
            printClientsData(LoadClientsDataToVector("Clients.txt"));
            return true;
        case enUserChoices::Add_New_Client:
            addClients();
            return true;
        case enUserChoices::Delete_Client:
            deleteRecordFromFile("Clients.txt");
            return true;
        case enUserChoices::Update_Client_Info:
            updateRecord("Clients.txt");
            return true;
        case enUserChoices::Find_Client:
            findClientChoice();
            return true;
        case enUserChoices::Transactions:
            runTransactionEngine("Clients.txt");
            return true;
        case enUserChoices::Exit:
            return false;
        default:
            return false;
        }
    return false;
}

void runProgram()
{
    bool IsRun = true;
    while (IsRun)
    {
        printMainMenuScreen();
        enUserChoices UserChoice = (enUserChoices)readNumberInRange(7,1,"Choose What do you want to do? [1 to 7]: ");
        IsRun = mapUserInput(UserChoice);
        std::cout << "Press Any Key to Go Back To Main Menu\n";
        char c;
        std::cin >> c;
    }
}

int main()
{
   runProgram();
}