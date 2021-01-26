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

    a=5; //initialized 'a'
    p= &a; //assigns address of 'a' to pointer 'p'

    printf("address of a is %d\n",&a);
    printf("value of a is %d\n",a);

    printf("address of a stored in p is %d\n",p);
    printf("value of a passed by derefrencing to p is %d\n", *p);

    *p = 21;

    printf("address of a stored in p after modification is %d\n",p);
    printf("value of \'a\' modified through pointer is %d\n", *p);

    return 0;
}