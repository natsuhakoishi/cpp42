#include <iostream>
#include "Array.hpp"
#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}

// #include "Array.tpp"

// int main()
// {
// 	Array<int> arr1;
// 	std::cout << "arr1 size: " << arr1.size() << std::endl;
// 	std::cout << std::endl;

// 	Array<int> arr2(5);
// 	std::cout << "arr2 size: " << arr2.size() << std::endl;
// 	std::cout << std::endl;

// 	arr2[0] = 42;
// 	arr2[1] = 88;
// 	arr2[2] = 64;
// 	std::cout << "arr2[0]: " << arr2[0] << std::endl;
// 	std::cout << "arr2[1]: " << arr2[1] << std::endl;
// 	std::cout << "arr2[2]: " << arr2[2] << std::endl;
// 	std::cout << std::endl;

// 	try
// 	{
// 		std::cout << "arr2[5]: " << arr2[5] << std::endl;
// 	}
// 	catch (const std::exception& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}

// 	std::cout << std::endl;
// 	Array<int> cpy = arr2;
// 	std::cout << "arr2 size: " << cpy.size() << std::endl;

// 	std::cout << "cpy[0]: " << cpy[0] << std::endl;
// 	std::cout << "cpy[1]: " << cpy[1] << std::endl;
// 	std::cout << "cpy[2]: " << cpy[2] << std::endl;

// 	std::cout << std::endl;
// 	try
// 	{
// 		std::cout << "cpy[5]: " << cpy[5] << std::endl;
// 	}
// 	catch (const std::exception& e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout << std::endl;
// 	return 0;
// }
