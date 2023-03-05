/*

判断闰年。闰年有两种情况：
(1)	能被100整除时，必须能被400整除；
(2)	不能被100整除时，被4整除即可。
输入一个年份，如果是闰年输出yes，否则输出no。

*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int year;
    cin >> year;

    // if (year % 100 == 0 && year % 400 ==0 || (year % 4 == 0 && year % 100 == 0)) printf("yes\n");
    // else printf("no\n");

    if (year % 100 == 0)
    {
        if (year % 400 == 0) printf("yes\n");
        else printf("no\n");
    }
    else
    {
        if (year % 4 == 0) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}