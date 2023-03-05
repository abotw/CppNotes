#include <iostream>

using namespace std;

int main()
{
    // " " - 32
    // "0" - 48
    // "A" - 65
    // "a" - 97
    int a = 32;
    char c = (char)a;
    cout << c << endl;

    // 'a' - 'A' = 32
    cout << 'a' -'A' << endl;

    cout << 'b' * 1 << endl;

    return 0;
}