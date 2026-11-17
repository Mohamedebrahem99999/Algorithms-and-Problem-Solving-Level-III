#pragma once
#include <iostream>
#include <string>
#include <limits>

// A generic function to read A number
double readNumber(std::string Message = "Enter a number: ")
{
    double Number;

    while (true)
    {
        std::cout << Message;
        std::cin >> Number;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid Entry, Enter a valid one\n";
        }
        else
            return Number;
    }
}

// A generic function to read A Positive number
int readPositiveNumber(std::string Message = "Enter a Positive Number: ")
{
    
    while (true)
    {
        int Number = readNumber(Message);
        if (Number > 0)
            return Number;
        std::cout << "Number Entered out of range\n";
    }
}

// A generic function to read A number in range
int readNumberInRange(int To, int From, std::string Message = "")
{
    if (Message == "")
        Message = "Enter A number between[" + std::to_string(From) + "] and [" + std::to_string(To) + "]: ";
    int Number;
    while (true)
    {
        Number = readNumber(Message);
        if (Number <= To && Number >= From)
            return Number;
    }
}

//A generic function to get a binary choice
bool getBinaryChoice(std::string Message)
{
    return readNumberInRange(1, 0, Message);
}

// A generic function to read multiple lines
std::string getText(std::string message)
{
    std::cout << message;
    std::string Text;
    std::getline(std::cin >> std::ws,Text);
    return Text;
}

char readChar(std::string message = "Enter a char please: ")
{
    std::string c;
    while (true)
    {
        std::cout << message;
        std::cin >> c;
        if (c.length() == 1)
            return c[0];
        std::cout << "Enter one char please\n";
    }
}