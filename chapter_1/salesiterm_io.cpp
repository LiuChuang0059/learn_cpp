#include <iostream>
#include "Sales_item.h"

int main ()
{
	Sales_item book ;
	std::cout<<"write ISBN + numbers + price:";
	std::cin>> book;
	std::cout << book << std::endl;
	return 0;

}