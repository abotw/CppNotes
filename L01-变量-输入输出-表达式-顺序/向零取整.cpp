#include <iostream>

using namespace std;

int main()
{
    cout << "除法：向 0 取整" << endl;
    cout << 5 / 2 << endl; // 2.5 => 2
    cout << -5 / 2 << endl; // -2.5 => -2
    cout << -2 / 5 << endl; // -0.4 => 0

    cout << "强制类型转换：向 0 取整" << endl;
    cout << (int)2.5 << endl; // 2
    cout << (int)-2.5 << endl; // -2

    cout << "取模结果正负只与`%`前面的数的正负有关系" << endl;
    cout << 5 % 2 << endl; // 1
    cout << 5 % -2 << endl; // 1
    cout << -5 % 2 << endl; // -1
    cout << -5 % -2 << endl; // -1
    return 0;
}