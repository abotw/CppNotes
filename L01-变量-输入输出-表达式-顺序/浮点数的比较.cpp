#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

const double eps = 1e-6;

int main()
{
    int a = 3;
    // 有效数字 16 位: 小数点前 1 位，小数点后 15 位
    printf("%.20lf\n", sqrt(a) * sqrt(a));

    if (sqrt(3) * sqrt(3) == 3) printf("equal\n");
    else printf("not equal\n");

    // fabs() 对浮点数取绝对值
    // abs(a - b) <= pow(10, -6) => 相等
    if (fabs(sqrt(3) * sqrt(3) - 3) <= eps) printf("equal\n");
    else printf("not equal\n");

    return 0;
}