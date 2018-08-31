# 改进后的Sales_data 类

## 数据成员
* 1. bookNo ，string类型，---表示ISBN编号
* 2. units_sold, unsigned类型---表示销量
* 3. revenue ，double类型，---总的销售收入

## 成员函数----声明必须在类的内部，定义可以在内部或者外部
* 1. combine
* 2. isbn
* 3. avg_price : 返回书籍的平均价格


**定义在内部的函数是隐式的inline函数**


## 非成员函数--- 定义和声明在类的外部

```cpp
struct Sales_data 
{
	string isbn() const {return bookNo;}
	Sales_data & combine(const Sales_data &);
	double avg_price() const;

	string bookNo;
	unsigned units_sold = 0;
	double revenue =0 ;

};

//非成员接口函数

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream,Sales_data&);
std::istream &read(std::istream,Sales_data&)

```

# 定义成员函数---内部

* isbn函数，返回一个string对象
```cpp
string isbn() const {return bookNo;}
```

## 1.引入this
> 成员函数通过一个名为this的额外的隐式参数访问调用的那个对象

>> 请求该函数的对象地址初始化this

* 例如
```cpp
total.isbn();
```
* 编译器把total的地址传给isbn的隐式形参this
```cpp
Sales_data::isbn(&total);
```

```cpp

std::string isbn() const{return this->bookNo;}

```

## 2.引入const成员函数-----修改隐式this指针的类型
* const 表示this是一个指向常量的指针
**this指针不能显式的定义**


# 在类的外部定义成员函数
* 返回类型，参数列表和函数名都要和类的内部声明一致
* 类外部定义的成员的名字必须包含他所属的类名

```cpp
double Sales_data::avg_price() const
{
	if(units_sold)
	{
		return revenue/units_sold;
	}
	else
	{
		return 0;
	}
}

```
* Sales_data::avg_price使用作用域运算符
* 编译器看到函数名，剩余的代码位于类的作用域
* avg_price 使用revenue和unit_sold，实际上隐式的使用Sales_data的成员

# 3. 定义一个返回this对象的函数----combine函数
* 类似于 +=内置运算符


```cpp
  Sales_data & Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;

	return *this;  // 返回调用该函数的对象==返回total的引用
}
```

* 例如
```cpp
total.combine(trans);
```
对于
* total的地址绑定到隐式的this参数上，而rhs绑定到trans上


* combine函数返回引用类型 Sales_data&;


* this 指针访问调用函数对象的一个整体。

























