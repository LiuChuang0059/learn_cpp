#include <iostream>

int main ()
{
	std::cout << "enter two numbers:";
	std::cout << std::endl;
	int v1=0,v2=0;

	std::cin >> v1;
	std::cin >> v2;

	std::cout << "the sum of "  <<  v1  << "and" << v2
	          << "is" << v1+v2;
	std::cout << std::endl;

	return 0;


}
