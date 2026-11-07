#include <stdio.h>

int main(void)
{
    int i;
    int *p;

    p = &i;

    printf("Address of i: %p\n",(void *)&i);
    printf("Address of p: %p\n",(void *)&p);
    printf("Value of p: %p\n", p);
    
}
