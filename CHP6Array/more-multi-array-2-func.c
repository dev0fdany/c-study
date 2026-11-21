#include <stdio.h>

void print_3D_array( int a[][3][4])
{
    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 3; col++){
            for (int width = 0; width < 4; width++)
                printf("%d ", a[row][col][width]);
        }
        printf("\n");
    }
}

int main(void)
{
    int x[2][3][4] = {
        {
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4}
        },
        {
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4}
        }
    };
    

    print_3D_array(x);
}
