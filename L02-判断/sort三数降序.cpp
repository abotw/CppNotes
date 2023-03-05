#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (b > a)
    {
        int t = b;
        b = a;
        a = t;
    }
    if (c > a)
    {
        int t = c;
        c = a;
        a = t;
    }
    if (c > b)
    {
        int t = c;
        c = b;
        b = t;
    }

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}