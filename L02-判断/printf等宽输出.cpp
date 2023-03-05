#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 12;
    int c = 123;
    
    printf("%-5d!\n", a);
    printf("%-5d!\n", b);
    printf("%-5d!\n", c);

    printf("%5d!\n", a);
    printf("%5d!\n", b);
    printf("%5d!\n", c);

    printf("%05d!\n", a);
    printf("%05d!\n", b);
    printf("%05d!\n", c);

    double d = 1.23;
    double e = 1.234;
    double f = 1.2345;

    printf("%5.1f!\n", d);
    printf("%5.2f!\n", e);
    printf("%5.3f!\n", f);

    printf("%-5.1f!\n", d);
    printf("%-5.2f!\n", e);
    printf("%-5.3f!\n", f);

    return 0;
}