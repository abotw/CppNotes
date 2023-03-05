#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    // 字符数组 char_string

    // method 1-1: `cin` 无空格字符数组
    // char a[50];
    // cin >> a;
    // cout << a << endl;

    // method 1-2: `cin.get()` 含空格字符数组
    // char a[50];
    // cin.get(a, 50);
    // cout << a << endl;

    // method 1-3: `cin.getline()` 含空格字符数组
    // char a[50];
    // cin.getline(a, 50);
    // cout << a << endl;

    // method 1-4: `fgets(c_str)` 含空格字符数组
    // fgets 自带回车，会自动补一个 `\n`
    char a[50];
    fgets(a, 50, stdin);
    cout << a << endl;

    // method 1-4: `gets(c_str)` 含空格字符数组，但已被淘汰
    // warning: this program uses gets(), which is unsafe.
    // char a[50];
    // cin >> a;
    // gets(a);
    // cout << a << endl;

    // 字符串

    // method 1-1: `getline()` 含空格字符串
    // string s;
    // getline(cin, s);
    // cout << s << endl;

    return 0;
}