#include <iostream>

using namespace std;

int foo (int a, int b = 10) // b => 默认参数，默认值一定要是后面的几个参数
{
    return a + b;
}

int main()
{
    cout << foo(5) << endl;
    cout << foo(5, 5) << endl;

    return 0;
}