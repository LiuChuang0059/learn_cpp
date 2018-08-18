#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string temp,write;
	while(cin >> write)
		if(temp==write) break;
	    else temp = write;
	if (cin.eof()) cout<<"No words reapeted!"<< endl;
	else cout<< write << "reapeted" << endl;

	return 0;
}