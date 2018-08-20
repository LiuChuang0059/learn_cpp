#include <iostream>
#include <string>

using namespace std;

string::size_type find_char(const string &s,char c,string::size_type &occurs)
{
	auto ret = s.size();
	occurs =0;
	for(decltype(ret) i =0; i !=s.size();++i)
	{
		if (s[i] == c)
		{
			if (ret ==s.size())
			{
				ret = i;

			}
			++occurs;

		}
	}
	return ret;
}

int main ()
{
	string s("hello world");
	string::size_type ctr;
	auto index = find_char(s,'l',ctr);

	cout<< index<< " " <<ctr<<endl;

	return 0;
}