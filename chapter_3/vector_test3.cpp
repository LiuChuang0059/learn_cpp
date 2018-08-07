#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main ()
{
	vector<int> v{1,2,3,4,5,6};
	for(auto &i : v){
		i *= i;
	}
	for(auto i: v){
		cout << i << "  " << endl;
	}
	return 0;
}

