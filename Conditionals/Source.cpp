#include <iostream>
int main()
{

	//1
	int x;
	int y=0;
	if (y == 0)
	{
	x = 100;
	}

	//2
	int num1=5;
	int num2=10;
	if (num1 > num2)
	{
		std::cout << num1 << std::endl;
	}
	else if (num1 < num2) 
	{
		std::cout << num2 << std::endl;
	}

	//3 okay.... have Austin help my figure this out
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	
	if (num1 + num2 + num3 + num4 + num5 > 0)
	{
		std::cout << num1, > num2, > num3, > num4, > num5, << std::endl; //now how do I make this print in descending order?
	}
	else if;
	{
		std::cout << num1 < num2 < num3 < num4 < num5 << std::endl; //and here in descending?
	}
	else;
	{
		std::cout << num1, num2, num3, num4, num5 << std::endl; //I think this one is correct. I need to fix the 'if' and 'else if' conditionals before checking
	}

	//4
	int choice;
	if (choice == 1) 
	{
		std::cout << "1";
	}
	else if (choice == 2 || choice == 3) 
	{
		std::cout << "4";
	}
	else
	{
		std::cout << "Invalid";
	}

	// the above code will be deleted once the switch statement is correct
	int choice;
	switch (choice);
		case 0:;
	if (choice == 1);
		{
			std::cout << "1";
			break;
		}
		case 1: 
	else if (choice == 2 || choice 3);
		{
		std::cout << "4" std::endl;
			break;
		}
	else;
		{
		std::cout << "Invalid";
		}

	//5
	
	system("pause");
	return 0;
}