#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s1;
    string s2 = s1;
    string s3 = "hello";
    string s4(5, 'c');

    cout << s1 << endl;
    cout << s3 << endl;
    cout << s4 << endl;

    string s5, s6;
    // scanf() 不能读入 string
    cin >> s5 >> s6;
    // getline(cin, s1); 读入一行，有空格也没关系
    cout << s5 << ' ' << s6 << endl;
    // printf() 可以输出 string，但需要使用 string.c_str() 的方式
    // 来返回对应字符数组的首地址
    printf("%s\n%s\n", s5.c_str(), s6.c_str());
    // puts()
    puts(s5.c_str());

    return 0;
}