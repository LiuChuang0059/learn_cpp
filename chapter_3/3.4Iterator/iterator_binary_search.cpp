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
	vector<int> text;
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		text.push_back(i);
	}
	int sought = 9 ;
	int count = 0;
	auto beg = text.begin();
	auto end = text.end();
	auto mid = text.begin() + (end-beg)/2 ;

	while(mid != end && *mid != sought)
	{
		if(sought<*mid)
		{
			end = mid ;
		}else
		{
			beg = mid +1 ;
		}
		mid = beg + (end-beg)/2 ;
		++count;
	}
	 cout<< count <<endl;

	return 0;

}















