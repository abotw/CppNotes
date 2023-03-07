#include <iostream>

using namespace std;

// void foo(int n, int a[5])
// void foo(int n, int a[])
void foo(int n, int *a) // Pass by Reference
{
    for (int i = 0; i < n; i ++ )
        cout << a[i] << endl, a[i] = 0;
}

// void bar(int n, int m, int a[3][3])
// void bar(int n, int m, int a[][3])
// void bar(int n, int m, int a[3][]) // 编译错误
// void bar(int n, int m, int a[][]) // 编译错误
void bar(int n, int m, int (*a)[3]) // 前面一定要加括号，第二维的长度要保持一致
{
    for (int i = 0; i < n; i ++ )
    {
        for (int j = 0; j < m; j ++ )
            cout << a[i][j] << ' ';
        cout << endl;
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    foo(3, a);

    for (int i = 0; i < 5; i ++ )
        cout << a[i] << endl;

    int b[3][3] = {
        {1, 2, 3, },
        {4, 5, 6, },
        {7, 8, 9, }
    };

    bar(2, 3, b);

    return 0;
}