#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};

int main(void)
{

    struct car saturn = {"Saturn SL\2", 1599.99, 175};

    printf("Name:            %s\n", saturn.name); 
    printf("Price (USD):     %f\n", saturn.price); 
    printf("Top Speed (km):  %i\n", saturn.speed); 

    struct car Aston_Martin = {.name="Aston Martin Vanquish", .price=433000, .speed=344};

    printf("Name:            %s\n", Aston_Martin.name); 
    printf("Price (USD):     %f\n", Aston_Martin.price); 
    printf("Top Speed (km):  %i\n", Aston_Martin.speed); 
}

