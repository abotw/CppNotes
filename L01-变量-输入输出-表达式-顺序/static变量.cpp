#include <iostream>

using namespace std;

void foo() // test static variable
{
    // 未给静态变量赋初值时，其值默认为 0
    static int cnt = 0; // 基本等价于全局变量，但是只有在这个函数内部才能访问
    cnt ++ ;
    cout << "call: " << cnt << " times" << endl;
}

int main()
{
    foo();
    foo();
    foo();

    return 0;
}