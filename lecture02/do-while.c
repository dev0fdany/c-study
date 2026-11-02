#include <stdio.h>

int main(void)
{
    int i = 10;
    do {
        printf("do-while, i is now %d\n", i);
        i++;
    }
    while (i < 10);
}
