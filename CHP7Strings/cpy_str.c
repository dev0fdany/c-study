#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = "Hello, world";
    char t[100];
    
    // This makes a copy of the sting.
    strcpy(t, s);
    
    t[0] = 'z';
    printf("%s\n", s);
    printf("%s\n", t);
}
