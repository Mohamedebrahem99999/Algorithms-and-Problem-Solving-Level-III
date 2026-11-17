#include "../Banking_System_Project/File_Handling.h"

int main ()
{
    printDataHeader();
    printClientsData(LoadClientsDataToVector("Clients.txt"));
}