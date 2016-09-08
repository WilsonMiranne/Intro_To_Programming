#include <iostream>
int main()
{
	//Exercise 1
	//int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; VALID
	//int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; INVALID (there are  too many values in the array)	//double radii[10] = (3.2, 4.7}; INVALID (there are not enough values in the array)	//int table[7] = { 2, , , 27, , 45, 39 }; INVALID
	//char codes[] = { 'A', 'X', '1', '2', 's' } INVALID (the array size is undefined)
	//int blanks[]; INVALID (there is no array size/elements)
	//int collection[-20]; INVALID (there can not be an array with a negative amount of elements)
	//int hours[3] = 8, 12, 16; VALID

	//Exercise 2
	//int values [] = {2, 6, 10, 14};
	//a) cout<<values[2] (will print '10' from the above array)
	//b) cout<<++values[0];
	//c) cout<<values[1]++;
	//d)x=2;
	//e)cout<<values[4];

	//Exercise 3
	int data[10] = { 10,9,8,7,6,5,4,3,2,1 };
	for (int i = 0; i < data; i++)
	{
		
	}

	//Exercise 4
	//i need to write a program that accepts 5 numbers from a user and sort them into an array. they should then be printed in reverse order.
	//the user will have to cin 5 values, not sure how to put them into an array yet but a for loop can be used to print it out
	std::cout << "Enter one number" << std::endl;
	std::cin >> num1 >> std::endl;
	std::cout << "Enter a second number" << std::endl;
	std::cin >> num2 >> std::endl;
	std::cout << "Enter a third number" << std::endl;
	std::cin >> num3 >> std::endl;
	std::cout << "Enter a fourth number" << std::endl;
	std::cin >> num4 >> std::endl;
	std::cout << "Enter a fifth number" << std::endl;
	std::cin >> num5 >> std::endl;
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int Numbers[5] = {};









	
	system("pause");
	return 0;
}