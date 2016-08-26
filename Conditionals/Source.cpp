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
	// First we will declare our variables as intergers //
	int num1, num2, num3;

	// Then let the user put in the numbers for those intergers //
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;

	// Add them up to decide what to do next //
	int sum = num1 + num2 + num3;
	// And put all those numbers into an array //
	int numbers[3] = { num1,num2,num3 };
	// Determine the size of the array //
	int sozeOfNums = sizeof(numbers) / 4;
	// Make a flag to control the flow of my sorting method //
	bool homestuck = true;
	// And a temporary variable for swaping numbers in the array //
	int temp;

	// If the sum is greater than zero we will sort in decending order //
	if (sum > 0)
	{
		// We start sorting here using a for loop that only keeps going //
		//for as long as the size of the array OR untill it has no more to sort //
		for (int j = 0; (j < sozeOfNums) && homestuck; j++)
		{
			// We set this to false because if nothing needs to be sorted we don't need to loop again //
			homestuck = false;
			// Now we start to compare all the numbers in the array to the ones next to each other //
			for (int a = 0; a < (sozeOfNums - 1); a++)
			{
				// In this case if index 2 is greater than index 1..... //
				if (numbers[a + 1] > numbers[a])
				{
					// ...We set the temporary variable equal to the current index... //
					temp = numbers[a];
					// ...Set the current index equal to the next index... //
					numbers[a] = numbers[a + 1];
					// ...And set the next index equal to the tenporary variable. //
					numbers[a + 1] = temp;
					// And because we had to swap numbers we may need to loop again, so set this to true. //
					homestuck = true;
				}
			}
		}
	}

	// If the sum is less than zero then we will sort in accending order //
	if (sum < 0)
	{
		for (int j = 0; (j < sozeOfNums) && homestuck; j++)
		{
			homestuck = false;
			for (int a = 0; a < (sozeOfNums - 1); a++)
			{
				if (numbers[a + 1] < numbers[a])
				{
					temp = numbers[a];
					numbers[a] = numbers[a + 1];
					numbers[a + 1] = temp;
					homestuck = true;
				}
			}
		}
	}

	// This will loop through the array and print to the console all the contents of said array //
	for (int i = 0; i < sozeOfNums; i++)
	{
		std::cout << numbers[i] << std::endl;
	}

	//4
	int choice;									//i first have to name the switch statement, or so i think. here it is "choice"
	std::cout << "pick a number between 1 and 4" << std::endl;
	std::cin >> choice;
	switch (choice)	
	{											//switch statements are held in one set of '{}'
	case 1:										//be sure to begin with case 0 and not skip to number 1... i have a habit of forgetting 0
		std::cout << "1" << std::endl;
		break;									//each case statement MUST end with a 'break;'
	case 2:
		std::cout << "2 or 3" << std::endl;
		break;
	case 3:
		std::cout << "2 or 3" << std::endl;
		break;
	case 4:
		std::cout << "4" << std::endl;
		break;
	default:									//'default' is the same as an 'else' statement. it says what to do if all case statements return false
		std::cout << "Invalid" << std::endl;
		break;
	}											//and now I think it is correct.
	//holy shit why are switch statements so complicated? what do they even do? why??????? there is literally no point in using them (that i am currently aware of.) I don't know.... maybe Austin could help me understand this too.
	//edit: I think I have a small understanding of switch statements, now to practice and comit to memory

	//5
	int numA;
	int numB;
	char operation;
	std::cout << "Please provide me with the following:" << std::endl;				//this line runs properly
	std::cout << "Give me a number." << std::endl;									//this line runs properly
	std::cin >> numA;																//this line runs properly
	std::cout << "And now give me a mathematical operation." << std::endl;			//this line runs properly
	std::cin >> operation;															//this line runs properly
	std::cout << "And finally, give me another number." << std::endl;				//i think this line is running properly
	std::cin >> numB;																//and here is where the code breaks i believe... what went wrong and what can i safely change without risk of breaking my code further?
	std::cout << "now sit back. I have the rest taken care of." << std::endl;


	//matt said to try a switch statement... i could use the practice anyhow
	switch (operation)													//so i give the switch statement int 'operation' to work with
	{
	case '+':															//god was this annoying. the '' around the +... it took me forever to think about.  i have a program that runs, but not correctly. that might be breaking my program.
		std::cout << numA << '+' << numB << '=';							//fairly simple. if user puts a + for the variable 'operation' then the values for numA and numB will be summed up for the answer.
		std::cout << numA + numB << std::endl;
		break;															//gotta remember those breaks
	case '-':															//the same thought process follows for the rest of the case statements.
		std::cout << numA << '-' << numB << '=';
		std::cout << numA - numB << std::endl;
		break;
	case '/':
		std::cout << numA << '/' << numB << '=';
		std::cout << numA / numB << std::endl;								//under Mr. Matt's suggestion I am applying the cout functions to print out the actual user input in "numA (operation) numB"
		break;															//it isn't working... i'll do more testing before asking for help.
	case '*':
		std::cout << numA << '*' << numB << '=';
		std::cout << numA * numB << std::endl;
		break;
	case '%':
		std::cout << numA << '%' << numB << '=';
		std::cout << numA % numB << std::endl;
		break;
	default:																	//default, remember that. it is the same as the 'else' in an if statement
		std::cout << "Error Invalid mathematical operation." << std::endl;		//not sure if this is required, but if i can get it all to run properly then this will help me deduce if everything is running properly
		break;
	}

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