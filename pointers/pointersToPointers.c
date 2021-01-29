/********************
 * Muhammad Malik
 * Pointers to pointers
 * 29th January, 2021
 * ******************/

#include<stdlib.h>
#include<stdio.h>

int main()
{
    int x = 5; 
    int* y = &x; 
    int** z = &y;
    int*** i = &z;

    * y = 10;
    ** z = 15;
    *** i = 20;

    printf("Address of x: %d \n",&x);
    printf("Address of x stored in y: %d \n",y);   

    printf("\n\nvalue of x (single pointer y): %d\n\n", *y);
    
    printf("Address of y: %d \n",&y);
    printf("Address of y stored in z: %d \n",z);

    printf("\n\nvalue of y (double pointer z): %d\n", **z);
    printf("value of - (single pointer z): %d\n\n", *z);
    
    printf("Address of z: %d \n",&z);
    printf("Address of z stored in i: %d \n",i);

    printf("\n\nvalue of - (single pointer i): %d\n", *i);
    printf("value of - (double pointer i): %d\n", **i);
    printf("value of - (triple pointer i): %d\n", ***i);

    
return 0;
}