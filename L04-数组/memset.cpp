#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int a[10];

    // memset(a, 0, sizeof(a)); // every byte: 0000 0000
    // memset(a, 1, sizeof(a)); // every byte: 0000 0001 => 16843009
    // memset(a, 2, sizeof(a)); // every byte: 0000 0010 => 33686018
    memset(a, -1, sizeof(a)); // => -1

    // 用 memset 来初始化数组比 for 快很多

    for (int i = 0; i < 10; i ++ )
        cout << a[i] << endl;

    return 0;
}