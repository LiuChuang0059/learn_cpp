#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool is_prefix(const vector<int>& l ,const vector<int>& r)
{
	if (r.size() < l.size())
	{
		return is_prefix(r,l);
	}
	for (unsigned i=0;i!=min(l.size(),r.size());++i)   // 取两者最小值
	{
		if(l[i] != r[i])
			return false;
	}
	return true;
}

int main ()
{
	vector<int> l{ 0, 1, 1, 2,4,5,6,7,8,4,5,6,6 };
	vector<int> r{ 0, 1, 1, 2, 3, 5, 8 };
	cout << (is_prefix(r, l) ? "yes\n" : "no\n");

	return 0;
}