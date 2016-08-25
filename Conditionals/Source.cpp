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

	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;
	int sum = num1 + num2 + num3;
	
	if (sum  > 0)
	{
		std::cout << num1 << num2 << num3 << std::endl; //now how do I make this print in descending order?
	}
	else if(sum < 0)
	{
		std::cout << num1 << num2 << num3 << std::endl;
	}
	else
	{
		std::cout << num1 << num2 << num3 << std::endl; //I think this one is correct. I need to fix the 'if' and 'else if' conditionals before checking
	}

	//4
	int choice = (1); //it told me that 'choice' for the if statement was undefined, so i gave the 'int choice =(1)' as a means of maybe defining it? it is still wrong, so how do I define 'choice' in the if statement?
	//after further recollection of the previous comment, maybe i need a std::cin>> statement? i know it is uspposed to have some sort of user input
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
	
	switch (choice = 1);
		case 0:
		{
			std::cout << "1";
			break;

		case 1:

			std::cout << "4" std::endl;
			break;

		case 2:

			std::cout << "Invalid";
		}
	//holy shit why are switch statements so complicated? what do they even do? why??????? there is literally no point in using them (that i am currently aware of.) I don't know.... maybe Austin could help me understand this too.

	//5
		if (x == 0)
		{
			y = 0;
	}
		else
		{
			y = 10 / x;
		}
	//the above code will be deleted after it is translated into a ternary operator
		int x = 10;
		int y = 1;
//so i think the 'x' and 'y' need to be defined, i just don't know what values to assign them, or if that value matters at all. for now I am assigning 'x' and 'y' random values.
		x = (5) ? 0 : 2;
//okay, so if my thought process is correct (it isn't) then I pretty much add user input into the '()' and the '0 : 2;' pretty much was a bool statement? if it was true, it would evaluate out to 0, and if false out to 2, if I am not mistaken. 
//I can not run this code to check it until I fix parts 3 and 4.....

	//6
		int numa;
		int numb;
		int operation;
		std::cout << "Provide me with two numbers and a mathematical operation and sit back, let me handel the rest." std::cout;
		std::cin >> "some value for numa" std::cin;
		std::cin >> "some value for numb" std::cin;
		std::cin >> "some value for operation." std::cin;
		//i think the code above is generally correct... or not. 
		//in this line i need a code that takes the user input and evaluate it with the operation the user also input. I'll draft some below

	
	//7
		int month1 = ();
		int month2 = ();
		int month3 = ();
		int month4 = ();
		int month5 = ();
		int month
	system("pause");
	return 0;
}