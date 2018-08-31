# 前文
* Sales_item类

```cpp
Sales_item item;   # 定义一个 item 类
```

* Sales_data 类
```cpp
Struct Sales_data {       // 类名 + 类主体
	std::string bookNo;
	unsigned unit_solds = 0;
	double revenue = 0;
};    //  类结束  加逗号，
Sales_data accum, trans,*salessptr;
```

# 设计Sales_data类

### Sales_data接口

* 成员函数：isbn函数，返回对象的ISBN编号
* 成员函数：combine函数，Sales_data对象加到另一个对象上
* add函数，两个SalesData对象的加法
* read函数，数据从istream读入到对象中
* print函数，输出


# 使用Sales_data类

```cpp
Sales_data total;

if(read(cin,total))   //读入第一笔交易
{
	Sales_data trans;
	while(read(cin,trans))
	{
		if (total.isbn == trans.isbn)
		{
			total.combine(trans);
		}
		else
		{
			print(cout,total)<<endl;  //输出结果
			total = trans;
		}
	}
	print(cout,total)<<endl;    //输出最后一条交易记录
}
else
{
	cerr<<"No Data!!"<<endl;
}
```
