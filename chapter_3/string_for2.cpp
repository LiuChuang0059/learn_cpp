#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::cin;
using std::endl;



int main ()
{
	string s("hello world!");
	decltype(s.size()) punc_cnt = 0 ;
    
	for (auto x : s){
		if (ispunct(x))
			++punc_cnt;
	cout << punc_cnt<< "charaters in "  << s << endl;

	}


	return 0;

}