#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    str.pop_back();

    cout << str << endl;

    return 0;
}