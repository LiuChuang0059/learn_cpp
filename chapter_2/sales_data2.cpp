#include <iostream>
#include <string>
//#include <Sales_data.h>

struct sales_data
{
	std::string bookNo;
	unsigned units_sold =0;
	double revenue =0.0;
};

int main ()
{
	sales_data data1,data2;
	double price = 0;    //定义价格变量
	std::cin>>data1.bookNo>>data1.units_sold>>price; // 读入book1 信息
	data1.revenue = data1.units_sold * price;       //计算book1 的收入
	std::cin>>data2.bookNo>>data2.units_sold>>price;
	data2.revenue = data2.units_sold * price;
    //比较 s📖的序列号
	if (data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data2.revenue + data1.revenue;
		std::cout<< data1.bookNo << "  " << totalCnt << "  " << totalRevenue<<" ";
		if(totalCnt!=0)
			std::cout<< totalRevenue/totalCnt << std::endl;
		else
			std::cout<< "no sales!!"<<std::endl;
		return 0;


	}else{
		std::cerr<< "books must refer to the same ISBN"
		         << std::endl;
		return -1;
	}



}