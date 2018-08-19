#include <iostream>
#include <string>

using namespace std;

int fact(int i)
{
	return i>1?i*fact(i-1):1;
}

void factorial()
{
	cout<< "please enter an integer"<<endl;
	int i;
	cin>>i;
	
	
	cout<<fact(i)<<endl;


}

int main ()
{
	factorial();
	return 0;
}