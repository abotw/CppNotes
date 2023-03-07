#include <iostream>

using namespace std;

void foo(int arr[])
{
    cout << "sizeof arr " << sizeof arr << endl;
}

int main()
{
    int a[10];
    cout << "sizeof a " << sizeof a << endl;

    foo(a);

    return 0;
}