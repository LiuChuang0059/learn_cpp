#include <iostream>

using namespace std;

void swap(int *ip,int *iq)
{
	if (*ip == *iq)
	{
		return;
	}
	 int temp;
	 temp = *ip;
	 *ip =  *iq;
	 *iq =  temp;
}


int main ()
{
	int ip=23,iq=32;
	swap(&ip,&iq);
	cout << "p:  "<<ip<<"\n" <<"q:   "<<iq<<endl;

	return 0;
}