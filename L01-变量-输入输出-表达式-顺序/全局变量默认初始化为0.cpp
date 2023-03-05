#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int cnt1[10];

int main()
{
    int cnt2[10];

    for (int i = 0; i < 10; i ++ )
        cout << cnt1[i] << endl;

    cout << "--------------" << endl;

    for (int i = 0; i < 10; i ++ )
        cout << cnt2[i] << endl;

    return 0;
}