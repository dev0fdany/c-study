#include <stdio.h>

int main(void)
{
    FILE *fp;
    char name[1024];
    float length;
    int mass;

    fp = fopen("whales.txt", "r");
    
    while( fscanf(fp, "%s %f %d", name, &length, &mass) != EOF)
        printf("%s whale, %d tones, %1.f meter \n", name, mass, length);

}
