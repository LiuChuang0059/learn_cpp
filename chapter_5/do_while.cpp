#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	string rsp;  //循环条件
	do
	{
		cout << "please enter two words:";
		string str1,str2;
		cin >> str1 >> str2;
		cout<< "The shorter of two words is "<<(str1< str2? str1:str2)
		    << "\n\n" <<"More? Enter yes or no: ";
		cin >> rsp;

	}while(!rsp.empty() && rsp[0] != 'n');
}