#include <stdio.h>
int main()
{
    int a = 10, *p1;
    p1 = &a;
    printf("%d %d", a, p1);
    p1 = p1 + 1;
    printf("\n%d\n ", a);
    printf("%d\n", *p1);
    printf("%d", p1);
    return 0;
}