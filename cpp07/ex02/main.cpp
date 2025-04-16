// #include <iostream>
// #include "Array.hpp"
// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }

#include "Array.hpp"

int	main(void)
{
	Array<float>	emptyArr;
	Array<char>		charArr(4);
	Array<int>		intArr(5);
	Array<int>		testArr(6);

	std::cout << std::endl;
	std::cout << "-----Check Array Size-----" << std::endl;
	std::cout << std::endl;
	std::cout << "emptyArr Size -> " << emptyArr.size() << std::endl;
	std::cout << "charArr Size -> " << charArr.size() << std::endl;
	std::cout << "intArr Size -> " << intArr.size() << std::endl;
	std::cout << "testArr Size -> " << testArr.size() << std::endl;
	std::cout << std::endl;

	std::cout << "-----Test Array Object & OutOfBoundException-----" << std::endl;
	std::cout << std::endl;
	charArr[0] = '4';
	charArr[1] = '2';
	charArr[2] = 'K';
	charArr[3] = 'L';
	for (unsigned int j = 0; j < charArr.size(); j++)
		std::cout << "charArr[" << j << "] = " << charArr[j] << std::endl;
	try
	{
		std::cout << "charArr[-1] = " << charArr[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "-----Test CC & CAO-----" << std::endl;
	std::cout << std::endl;
	for (unsigned int i = 0; i < intArr.size(); i++)
		intArr[i] = i;
	Array<int> intArr2 = intArr;
	Array<int> testArr2(testArr);
	std::cout << "intArr2 Size -> " << intArr2.size() << std::endl;
	std::cout << "testArr2 Size -> " << testArr2.size() << std::endl;
	std::cout << std::endl;
	testArr2 = intArr2;
	std::cout << "testArr2 Size after CAO -> " << testArr2.size() << std::endl;
	std::cout << std::endl;
	for (unsigned int a = 0; a < testArr2.size(); a++)
		std::cout << "testArr2[" << a << "] = " << testArr2[a] << std::endl;
	try
	{
		std::cout << "testArr2[" << testArr2.size() << "] = " << testArr2[testArr2.size()] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
