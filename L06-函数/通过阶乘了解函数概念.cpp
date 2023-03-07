#include <cstdio>

int fact(int n) // 函数定义 `int a = 0;`, 有函数体 ≠ 函数声明 `int a;`，无函数体，可以不写变量名
{
    int res = 1;
    for (int i = 1; i <= n; i ++ )
        res *= i;
        
    return res; // 函数的返回值类型为 `int` 时，不写 `return` 语句不会报错，但返回的是一个随机值。
}

int main()
{
    int n;
    scanf("%d", &n);
    
    printf("%d\n", fact(n));
    
    return 0;
}

// 10! = 3628800 = 3,628,800 ≈ 362w