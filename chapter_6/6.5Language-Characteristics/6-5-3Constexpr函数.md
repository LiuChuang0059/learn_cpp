# constexpr 函数---用于常量表达式的函数

* 函数的返回类型以及所有的形参类型都是字面值类型，

* 函数体中 必须有且只有一条return语句

```cpp
constexpr int new_sz()
{
    return 12;
}

constexpr int foo =new_sz();

```
* 执行初始化任务时候，constexpr隐式的指定为内联函数

* 允许constexpr函数的返回值并非一个常量，但是实参要为常量
```cpp
constexpr size_t scale(size_t cnt) {return new_sz() *cnt;};

int arr[scale(2)];

```



#  把内联函数和constexpr函数定义 放在头文件

![](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_6/6.5Language-Characteristics/%E5%86%85%E8%81%94%E5%87%BD%E6%95%B0-%E5%A4%B4%E6%96%87%E4%BB%B6.png)
