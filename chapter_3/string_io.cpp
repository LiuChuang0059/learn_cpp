#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;



int main ()
{
	string s;
	cin>> s;             // 读入s字符串 忽略开头的空白， 第一个字符 到下一处空白
	cout << s << endl;

	return 0;

}