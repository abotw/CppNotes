#include <iostream>

using namespace std;

int main()
{
    // 字符与整数的联系 —— ASCII码
    // 每个常用字符都对应一个 -128 ~ 127 的数字，二者之间可以相互转化

    char c1 = 'a';
    cout << "a: " << (int)c1 << endl;

    char c2 = 'A';
    cout << "A: " << (int)c2 << endl;

    int i = 66;
    cout << "66: " << char(i) << endl;

    cout << 'z' - 'a' << endl;

    // A ~ Z: 65 ~ 90
    // a ~ z: 97 ~ 122
    cout << 'A' - 'a' << endl;

    // 0 ~ 9: 48 ~ 57
    cout << (int)'0' << endl;

    cout << "\\0: " << (int)'\0' << endl;

    for (int i = -128; i < 128; i ++ )
    {
        cout << i << ": " << char(i) << endl;
    }

    return 0;
}