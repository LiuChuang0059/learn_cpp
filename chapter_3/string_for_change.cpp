#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::cin;
using std::endl;



int main ()
{
	string s("hello world!");
    
	for (auto &c : s){
		c=toupper(c);

	cout << s << endl;}


	

	return 0;

}