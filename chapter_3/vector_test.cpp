#include <iostream>
#include <string>
#include <vector>
#include <cctype>

int main () 
{
	std::vector<int> v;
	for (int i = 0; i < 100; ++i)
{
	v.push_back(i);
}
for (auto j : v)
	{
		std::cout << j << std::endl;
	}
return 0;
}