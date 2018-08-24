#include <iostream>


using namespace std;



void swap(int*& left ,int*& right)
{
	auto temp = left;
	left = right;
	right = temp;
}

int main()
{
	int i = 42, j = 99;
	auto lft = &i;
	auto rht = &j;
	swap(lft, rht);
	std::cout << *lft << " " << *rht << std::endl;

	return 0;
}