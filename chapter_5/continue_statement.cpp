#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string temp, write;
	while(cin>>write && !write.empty())
	{
		if(! isupper(write[0]))
			continue;
		if (temp==write)
			break;
		else
			temp = write;
	}
	if (cin.eof())
		cout<< "NO"<<endl;
	else
		cout << write<<"repeated"<<endl;

	return 0;
}