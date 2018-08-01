#include <iostream>
int main ()
{   
	int sum = 0, val = 0;
	std::cout<<"write numbers:";
	while (std::cin>> val)
		sum +=val;
	std::cout << "sum is "<< sum << std::endl;

	return 0;
}