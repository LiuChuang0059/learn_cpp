#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;



int main ()
{
	string line;
	while (getline(cin,line))
		cout << line<< endl;

	return 0;

}