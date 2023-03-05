#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char a1[] = {'C', '+', '+'};
    char a2[] = {'C', '+', '+', '\0'};
    char a3[] = "C++";
    // char a4[6] = "Daniel";

    cout << sizeof a1 << endl;
    cout << sizeof a2 << endl;
    cout << sizeof a3 << endl;

    cout << a2 << endl;

    char str[100];

    // cin >> str;
    // cout << str << endl;
    // printf("%s\n", str);

    // warning: this program uses gets(), which is unsafe.
    //gets(str);

    // fgets(char_str, 100, stdin);
    // cin.getline(char_str);

    // string s;
    // 只有 getline 是读取带空格的字符串
    // getline(cin, s);
    
    char a5[] = "ABCDE";
    cout << a5 + 2 << endl;

    char str1[10];

    cin >> str1 + 2;
    cout << str1 + 2<< endl;

    // puts(char_str) === printf("%s\n", char_str)

    return 0;
}