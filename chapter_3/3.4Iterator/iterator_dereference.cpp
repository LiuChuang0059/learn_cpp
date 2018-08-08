
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
	string s("hello world");
	if (s.begin()!=s.end())
	{
		auto it = s.begin();
		*it = toupper(*it);
		cout<< s<<endl;
	}
	return 0;
}