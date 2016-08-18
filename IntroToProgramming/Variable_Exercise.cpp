#include <iostream>  


int main(){
	
	//1
	float a = 2.0f / 3.0f + 3.0f / 5.0f;
	int b = 2 % 3 + 3 % 5;
	int c = 23 % 15 % -2;
	float d = 25.0f * 1.0f / 2.0f;
	float e = 25.0f * 1.0f / 2.0f;
	float f = 25.0f * (1.0f / 2.0f);
	float g = 235.0f / 8.0f + 7.0f;
	float h = 235.0f / 8.0f + 7.0f;
	float i = ((20.0f + 1.0f) / 2.0f - 2.0f) / (23.0f + 3.0f)*0.2f;
	printf("%f \n", a);	
	printf("%i \n", b);	
	printf("%i \n", c);	
	printf("%f \n", d);	
	printf("%f \n", e);	
	printf("%f \n", f);
	printf("%f \n", g);	
	printf("%f \n", h);	
	printf("%f \n", i);

	//2
	//variable for a= averageHeight
	//variable for b= above65k
	//variable for c= below5k
	//variable for d= totalCost

	//3
	//121 = int
	//9.4 = float
	//r = variable
	//100000 = int
	//False = bool

	//4
	int numa;
	int numb;
	int temp;
	std::cout << "HOMESTUCK" << std::endl;
	std::cin >> numa;
	std::cin >> numb;
	std::cout << "first:" << numa << std::endl << "second:" << numb << std::endl;
	temp = numa;
	numa = numb;
	numb = temp;
	std::cout << "consider them switched:" << std::endl << "first:" << numa;
	std::cout << std::endl
		<< "second:" << numb << std::endl;

	//5

	system("pause");
	return 0;

}

