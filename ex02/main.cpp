#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
    // Test with an array of integers
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); ++i)
    {
        intArray[i] = i * 10;
    }
    std::cout << "Integer array: ";
    for (unsigned int i = 0; i < intArray.size(); ++i)
    {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Test with an array of doubles
    Array<double> doubleArray(5);
    for (unsigned int i = 0; i < doubleArray.size(); ++i)
    {
        doubleArray[i] = i * 1.1;
    }
    std::cout << "Double array: ";
    for (unsigned int i = 0; i < doubleArray.size(); ++i)
    {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    // Test with an array of strings
    Array<std::string> stringArray(3);
    stringArray[0] = "Hello";
    stringArray[1] = "World";
    stringArray[2] = "!";
    std::cout << "String array: ";
    for (unsigned int i = 0; i < stringArray.size(); ++i)
    {
        std::cout << stringArray[i] << " ";
    }
    std::cout << std::endl;

	// Test empty constructor
    Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;
    try
    {
        emptyArray[0] = 10; // This should throw an exception
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << e.what() << std::endl;
    }

    // Test copy constructor
    Array<int> copyArray(intArray);
    std::cout << "Copied integer array: ";
    for (unsigned int i = 0; i < copyArray.size(); ++i)
    {
        std::cout << copyArray[i] << " ";
    }
    std::cout << std::endl;

    // Test assignment operator
    Array<int> assignedArray;
    assignedArray = intArray;
    std::cout << "Assigned integer array: ";
    for (unsigned int i = 0; i < assignedArray.size(); ++i)
    {
        std::cout << assignedArray[i] << " ";
    }
    std::cout << std::endl;

    // Test out of range exception
    try
    {
        intArray[10] = 100;
    }
    catch (const std::out_of_range &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
