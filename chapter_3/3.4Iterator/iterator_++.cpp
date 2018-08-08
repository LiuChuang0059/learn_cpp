
#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;
//将第一个单词 全部大写
int main ()
{
	string s("hello world");
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) //直到遇到空白字符
	
	{
		
		*it = toupper(*it);
		
	}
	cout<< s<<endl;
	return 0;
}