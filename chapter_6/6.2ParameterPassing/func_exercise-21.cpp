#include <iostream>

using namespace std;

int larger(int i, const int *p)
{
	return (i > *p) ?  i : *p;
}

int main ()
{
	int i =0;
	cout << larger(2,&i)<<endl;

	return 0;

}