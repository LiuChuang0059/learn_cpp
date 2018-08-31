#include "class_exercise7-2.h"
#include <iostream>

using namespace std;


int main()
{
	Sales_data total;
	if(cin>>total.bookNo>>total.revenue>>total.units_sold)
	{
		Sales_data trans;

		while(cin>>total.bookNo>>total.revenue>>total.units_sold)
		{
			if(total.isbn()==trans.isbn())
			{
				total.combine(trans);
			}
			else
			{
				cout<< total.bookNo<<"  "<<total.revenue<<"  "<<total.units_sold<<endl;
				total =trans;
			}
		}
		cout<< total.bookNo<<"  "<<total.revenue<<"  "<<total.units_sold<<endl;
	}
	else
	{
		cerr<<"No Data !"<<endl;
		return -1;

	}
	return 0;
}