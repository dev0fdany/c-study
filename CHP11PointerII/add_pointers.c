#include <stdio.h>

int main(void)
{
    int a[5] = {11, 22, 33, 44, 55};

    int *p = &a[0];

    printf("%d\n", *p);

    printf("%d\n", *(p+1));
}
