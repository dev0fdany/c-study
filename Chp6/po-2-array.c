#include <stdio.h>

int main(void)
{
    int a[5]= {11,22,33,44,55};
    int *p;

    p = &a[0];
    // Also a way to do it is..
    // p = a;
    printf("%d\n", *p);
}
