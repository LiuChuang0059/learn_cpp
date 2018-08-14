#include <iostream>

int main ()
{
	int ia[3][4] =
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,0.10,11}
	};
	size_t cnt = 0;
	for(auto &row : ia)
		for (auto &col :row)
		{
			col = cnt;
			++cnt;
		}



	for (auto p = begin(ia),p!= end(ia), ++p)
		for (auto q = begin(*p),q!=end(*p),++q)
		{
			cout<< *q << " ";

		}
		cout<< endl;
}