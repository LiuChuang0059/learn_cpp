#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::cin;
using std::endl;



int main ()
{
	string str1("hello world!");
    
	for (auto x : str1){
		cout << x << endl;}

	

	return 0;

}