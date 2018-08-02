#include <iostream>
#include "Sales_item.h"

int main ()
{
	Sales_item item1,item2;
	std::cout<<"input two books :";
	std::cin>>item1>>item2;
	std::cout<<item2+item1<<std::endl;
	return 0;
}