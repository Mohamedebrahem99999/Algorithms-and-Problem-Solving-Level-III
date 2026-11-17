#include "../Banking_System_Project/File_Handling.h"

int main ()
{
    addClients();
    std::string AccountNumber = getText("Please enter AccountNumber to find? ");
    stClinetData ClientData = findByAccountNumber(AccountNumber);
    if (!(ClientData.AccountNumber == ""))
    {
        printClientRecord(ClientData);
    }
    else
    {
        std::cout << "No Clients Found\n";
    }
}