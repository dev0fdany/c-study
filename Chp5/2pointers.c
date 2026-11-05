#include <stdio.h>

int main(void)
{
    int i = 10;
    float j = 3.14;
    char k = 'A';

    printf("The value of i is %d\n",i);
    printf("And its address is %p\n",(void *)&i);

    
    printf("The value of j is %f\n",j);
    printf("And its address is %p\n",(void *)&j);
    
    printf("The value of k is %c\n",k);
    printf("And its address is %p\n",(void *)&k);

}
