#include <stdio.h>

int my_str_len( char *s){
    int count = 0;

    while ( s[count] != '\0')
        count++;
    return count;
}

int main(void)
{
    char *t = "Hello, world!";
    int size = 0;

    size = my_str_len(t);
    printf("Size of string is:%d\n", size);
}
