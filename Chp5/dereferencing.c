#include <stdio.h>

int main(void)
{
    int i;
    int *p;

    p = &i;

    i = 10;
    *p = 20; // access's the variable i
    
    printf("i is %d\n", i);
    printf("i is %d\n", *p); // dereference-p is the same as i
}

