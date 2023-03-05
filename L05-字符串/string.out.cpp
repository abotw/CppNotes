// 1. string 是一个对象，该对象由**字符**组成

#include <cstring>
#include <iostream> // ? 与 #include <string> 的区别

using namespace std;

int main()
{
    string s = "Hello, world!";

    // method 1: 可以将 string 对象作为字符数组来处理
    for (int i = 0; i < s.size(); i ++ ) // s.size() === s.length() === strlen(s.c_str())
        cout << s[i] << endl;

    // method 2: 范围遍历: 只能 read 原 string，不能 write 原 string
    for (char c : s) // for(type x : y) 是 C++ 11 标准中推出的
    // for (auto c : s) `auto`让编译器去自动判断变量类型
    // for (char &c : s) 可以 write
        cout << c << endl;
    
    return 0;
}