/*

简单计算器输入两个数，以及一个运算符+, -, *, /，输出这两个数运算后的结果。
当运算符是/，且除数是0时，输出”Divided by zero!”; 当输入的字符不是+, -, *, /时，输出”Invalid operator!”。

*/

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    double a, b;
    char sign;

    cin >> a >> b >> sign;

    if (sign == '+') printf("%f\n", a + b);
    else if (sign == '-') printf("%f\n", a * b);
    else if (sign == '*') printf("%f\n", a * b);
    else if (sign == '/')
    {
        if (b == 0) printf("Divided by zero!\n");
        else printf("%f\n", a / b);
    }
    else printf("Invalid operator!\n");

    return 0;
}