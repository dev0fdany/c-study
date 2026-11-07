#include <stdio.h>

int main(void)
{
    int *p;

    p = NULL;   // int *p = NULL;
    
    // printf("p's value: %d\n", *p); // causes crash cuz its not initialized
    printf("p is: %p\n", p);
    printf("Address of p is: %p\n",(void *)&p);
}
