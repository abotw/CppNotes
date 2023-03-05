#include <iostream>

using namespace std;

int main()
{
    // bool false/true <= 1byte <= char 0/1
    // char 'a', ' ', '\n' <= 1byte <= _ _ _ _ _ _ _ _ => 2^8 => 256
    // int -2147483648 ~ 2147483647 <= 4byte, 32bit <= _ _ _ _ _ _ _ _ | _ _ _ _ _ _ _ _ | _ _ _ _ _ _ _ _ | _ _ _ _ _ _ _ _ 
    // => 0 ~ 2^31-1 共计 2^31 个数，-2^31 ~ -1 共计 2^31 个数
    // float 3.14, 1.235e2 单精度浮点数，有效数字位数 6、7 位 <= 4byte
    // double 有效数字 15、16 位 <= 8byte
    // long long -2^63 ~ 2^63-1 -9*10^18 ~ 9*10^18 <= 8byte
    // long double 有效数字 18、19 位，8、12、16byte都有，大部分是 16byte 
    int a, b = 2, c = b;
    cout << b << endl;
    long long l = 100000000000000000ll;
    cout << "long long: " << l << endl;
    float f = 1.235e2;
    cout << f << endl;
    return 0;
}