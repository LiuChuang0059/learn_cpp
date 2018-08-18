#include <iostream>
#include <stdexcept>

using namespace std;

int main(void)
{
	int i,j;
	cout<< "Please input two words:" <<endl;
	while(cin>>i>>j)
	{
		try
		{
			if (j==0)
				throw runtime_error("divisor can't be 0");
			cout<<i/j<<endl;
		}
		catch (runtime_error err)
		{
			cout<<err.what()<<"Try Again ? yes or no :"<<endl;
			char r;
			cin>> r;
			if(!cin || r =='n')
				break;
		}
		cout<< "Please input two words:" <<endl;
	}
	
	return 0;

}
// y运算后增加询问，是否继续计算，添加退出程序提醒