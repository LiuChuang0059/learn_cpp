#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;
//
int main ()
{
	vector<string> text;
	text.push_back("hello world");
	text.push_back("+++++");
	text.push_back("i love you");
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) //直到遇到空白字符
	
	{
		for (auto  &c : *it)
		{
			if(isalpha(c))
			{
				c= toupper(c);
			}
		}
	}
		for(auto i : text)
		{
			cout<< i << endl;
		}
		
	
	return 0;
}