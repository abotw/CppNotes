#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    stringstream string_to_int;
    string s = "12345";
    int n;

    string_to_int << s;
    // string_to_int.str(s);
    // s = string_to_int.str()

    string_to_int >> n;

    cout << "s = " << s << endl;
    cout << "n = " << n << endl;
    
    return 0;
}