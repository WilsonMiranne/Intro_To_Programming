#include <iostream>
int x = 25;
int main()
{
	int num = 5;
	{
		int x = 10;
		num = x;
	}
	printf("%i", num);
	system("pause");
	return 0;
}