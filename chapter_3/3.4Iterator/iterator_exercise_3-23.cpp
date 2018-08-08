#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main ()
{
	vector<int> ivec;
	for (int i = 0; i < 10; ++i)
	{
		ivec.push_back(i);
	}
	
		for(auto &it :ivec)
		{
			it = it * 2;
			cout<< it <<endl;


		}
	
	
	return 0;
}