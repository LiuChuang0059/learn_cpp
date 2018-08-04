# learn_C
c语言学习（c++ primer)

---------
## 0. c++ 概述
- [x] [1. c++ 概述](https://www.zybuluo.com/zzzxxxyyy/note/1230950)

-----------
## 1. c++ 基本
- [x] [1. 编译和运行](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_1/1.1%20%E7%BC%96%E8%AF%91%E8%BF%90%E8%A1%8C%E7%A8%8B%E5%BA%8F.md)-------[问题解决](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_1/1.1g++%E7%BC%96%E8%AF%91%E9%94%99%E8%AF%AF%E8%A7%A3%E5%86%B3.md)
- [x] [2. 预处理器](https://www.zybuluo.com/zzzxxxyyy/note/1231193)
- [x] [3. 输入输出](https://www.zybuluo.com/zzzxxxyyy/note/1231444)-----[code](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_1/io.cpp)
- [ ] [4.循环 if while for]()-------[code](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_1/io_uncertain.cpp)
- [x] [5. 内置数组数据类型](https://www.zybuluo.com/zzzxxxyyy/note/1231553)
- [x] [6.类_c++特性](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_1/1.3%E7%B1%BB_c%2B%2B%E7%89%B9%E6%80%A7.md)
------[类io特性code](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_1/salesiterm_io.cpp)------[类加减特性code](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_1/salesiterm_add.cpp)--------[类function特性code](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_1/salesitem_func.cpp)

------------
## 2. 变量和基本类型

### [2-1.基本内置类型](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_2/2.1%E5%9F%BA%E6%9C%AC%E5%86%85%E7%BD%AE%E7%B1%BB%E5%9E%8B.md)
### [2-2.变量](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_2/2.2%E5%8F%98%E9%87%8F.md)
### 2-3.复合类型
#### [*********2-3-1 复合类型-引用](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_2/2.3%E5%A4%8D%E5%90%88%E7%B1%BB%E5%9E%8B.md)
#### [*********2-3-2 复合类型-指针](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_2/2.3%E5%A4%8D%E5%90%88%E7%B1%BB%E5%9E%8B-%E6%8C%87%E9%92%88.md)
### [2-4.const 限定符](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_2/2.4const%E9%99%90%E5%AE%9A%E7%AC%A6.md)
### [2-5.处理类型](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_2/2.5%E5%A4%84%E7%90%86%E7%B1%BB%E5%9E%8B.md)
### 2-6.自定义数据结构
#### [*********2-6-1 概览](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_2/2.6%E8%87%AA%E5%AE%9A%E4%B9%89%E6%95%B0%E6%8D%AE%E7%B1%BB%E5%9E%8B.md)
#### [*********2-6-2 实例sales_data类 code](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_2/sales_data2.cpp)

-----------

## 3. 字符串，向量和数组

### [3-1 命名空间的using声明](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_3/3.1%E5%91%BD%E5%90%8D%E7%A9%BA%E9%97%B4%E7%9A%84using%E5%A3%B0%E6%98%8E.md)
### 3-2 标准类型库 string
#### [*********3-2-1 string 初始化](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_3/3.2-1%E6%A0%87%E5%87%86%E5%BA%93%E7%B1%BB%E5%9E%8Bstring%E5%88%9D%E5%A7%8B%E5%8C%96.md)
#### [*********3-2-2 sting 对象操作（io + getline）](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_3/3.2-2%E6%A0%87%E5%87%86%E5%BA%93%E7%B1%BB%E5%9E%8Bstring(string%E5%AF%B9%E8%B1%A1%E6%93%8D%E4%BD%9C).md)----code: [1输入输出 --](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_3/string_io2.cpp) [2.输入不确定字符--](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_3/string_io3_uncertain.cpp) [3. getline](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_3/string_getline.cpp)
#### [*********3-2-3 string 字符串操作（for + subscript）](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_3/3.2-3%E6%A0%87%E5%87%86%E5%BA%93%E7%B1%BB%E5%9E%8Bstring(stringstring%E5%AF%B9%E8%B1%A1%E5%AD%97%E7%AC%A6%E6%93%8D%E4%BD%9C).md)-----code: [1计数 --](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_3/string_for2.cpp)[2.改变大写(引用)--](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_3/string_for_change.cpp)[3.下标循环](https://github.com/LiuChuang0059/learn_cpp/blob/master/chapter_3/string_subscript_iteration.cpp)
