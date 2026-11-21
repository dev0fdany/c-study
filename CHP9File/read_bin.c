#include <stdio.h>

int main(void)
{
    FILE *fp;
    unsigned char c;

    fp = fopen("output_bin.bin", "rb");

    while(fread(&c, sizeof(char), 1, fp) > 0)
        printf("%d\n", c);
}
