#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100] = "Hello, world!";
    char b[100];

    // strlen() 只计算字符串的元素，`\0`不计入其中
    cout << strlen(a) << endl;

    strcpy(b, a);

    cout << strcmp(a, b) << endl;

    return 0;
}