#include <iostream>
#include "Sales_item.h"

int main ()
{
	Sales_item total; //交易总量
	// 读入一条消暑记录进入 total
	if (std::cin>>total){
		Sales_item trans;
		// 读入处理 剩余的书
		while (std::cin>> trans){
			// 相同 加入total
			if (total.isbn() == trans.isbn()){
				total += trans;

			}//不同 打印上一个 更换新的total
			else{
				std::cout<< total << std::endl;
				total = trans;
			}
			// 处理所有销售记录一遍
		} std::cout<< total << std::endl;

	}else{
		std::cerr<<"NO DATA!"<<std::endl;
		return -1;
	}return 0;

}