#include <iostream>
#include <cstring>

using namespace std;

const int n = 10;

int main()
{
    int a[n], b[n];

    memset(a, 0, sizeof a);

    memcpy(b, a, sizeof a);

    for (int i = 0; i < n; i ++ )
    {
        cout << b[i] << endl;
    }

    return 0;
}