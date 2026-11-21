#include <stdio.h>

int main(void)
{
    int a[5] = {11, 22, 33, 44, 55};

    int b[3][3] = {[0][0]= 1, [1][1]= 1, [2][2]= 1};

    int c[2][5] = {
        {0, 1, 2, 3, 4},
        {6, 7, 8, 9, 10}
    };

    for (int i = 0; i < 5; i++){
        printf("Value of a is: %d\n", a[i]);
    }

    for (int j = 0; j < 3; j++){
        for ( int k = 0; k < 3; k++){
            printf("(%d,%d) = %d\n", j, k, b[j][k]);
        }
    }

    for (int x = 0; x < 2; x++){
        for ( int y = 0; y < 5; y++){
            printf("(%d,%d) = %d\n", x, y, c[x][y]);
        }
    }
}
