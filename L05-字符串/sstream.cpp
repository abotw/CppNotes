#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // 将字符串 s 转换成 字符串流
    stringstream ssin(s);

    // ssin == cin
    int a, b;
    string str;
    double d;

    ssin >> a >> str >> b >> d;

    cout << a << endl << str << endl << b << endl << d << endl;

    return 0;
}