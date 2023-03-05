#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    string s1;
    cout << s1.empty() << endl;
    // string.length() === string.size()
    // string.size() 很快，直接存储了一个 val，不需要像 strlen() 循环一遍数组
    // strlen(c_str) => char_string
    cout << s1.size() << endl;

    string s2 = "hello";
    cout << s2.empty() << endl;
    cout << s2.size() << endl;

    // 错误示范：
    // string s2 = "hello" + " world";

    return 0;
}