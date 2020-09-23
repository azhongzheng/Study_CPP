#### 目标

修改以下程序，使用 C++ string 类而不是 char 数组。

```cpp
#include<iostream>
int main()
{
  using namespace std;
  const int ArSize = 20;
  char name[ArSize];
  char dessert[ArSize];

  cout << "Enter your name\n";
  cin.getline(name,ArSize);
  cout << "Enter your favorite dessert\n";
  cin.getline(dessert,ArSize);
  cout <<"I have some delicious "<< dessert;
  cout << " for you, "<<name<<".\n";
  return 0;
}
```

#### 要求

1. 文件存放在 `/home/project` 下，源代码文件名为 `3-2.cpp`；
2. 代码必须编译为可执行文件，可执行文件名称为 `3-2`；

#### 提示

1. 输入命令 `g++ -o 3-2 3-2.cpp` 进行编译，输入命令 `./3-2` 运行代码；
2. cin.getline() 不接受 string 类作为参数。