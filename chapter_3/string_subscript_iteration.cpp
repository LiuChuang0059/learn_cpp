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
    
	for (decltype(s.size()) index = 0 ; index != s.size() && !isspace(s[index]) ; ++index)
	{
		s[index] = toupper(s[index]);
	}

	cout << s << endl;


	

	return 0;

}