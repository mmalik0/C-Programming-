/***************
 * Author: Muhammad Malik
 * Title: Basic Pointers
 * Date: Jan 25th, 2021 
 * *************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    int* p;

    a=5;
    p= &a;

    printf("value of a is %d\n",a);
    printf("address of a is %d\n",&a);

    printf("value of a passed by derefrencing to p is %d\n", *p);
    printf("address of a stored in p is %d\n",p);

    return 0;
}