#ifndef CP5_ex7_02_h
#define CP5_ex7_02_h

#include <string>


using namespace std;



struct Sales_data 
{
	string isbn() const {return bookNo;};
	Sales_data & combine(const Sales_data &);
	double avg_price() const;

	string bookNo;
	unsigned units_sold = 0;
	double revenue =0 ;

};

//非成员接口函数

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream,Sales_data&);
std::istream &read(std::istream,Sales_data&);

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}



#endif