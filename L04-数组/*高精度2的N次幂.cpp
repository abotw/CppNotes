#include <iostream>
#include <cmath>

using namespace std;

const int N = 3010;

int main()
{
    int a[N] = {1};
    int n;
    cin >> n;

    printf("%d\n", (int)pow(2, n));

    int m = 1;
    for (int i = 0; i < n; i ++ )
    {
        int s = 0;
        for (int j = 0; j < m; j ++ )
        {
            s += a[j] * 2;
            a[j] = s % 10;
            s /= 10;
        }
        if (s) a[m ++ ] = s;
    }

    for (int i = m - 1; i >= 0; i -- )
        printf("%d", a[i]);
    printf("\n");

    return 0;
}