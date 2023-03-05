#include <cstdio>

int main()
{
    char s[1000];
    fgets(s, 1000, stdin);

    int a, b;
    char str[1000];
    double d;

    sscanf(s, "%d%s%d%lf", &a, str, &b, &d);

    printf("%d\n%s\n%d\n%lf\n", a, str, b, d);

    return 0;
}