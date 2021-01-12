/**************
 * Muhammad Malik
 * Sum of two numbers
 * January 11th, 2021
 *************/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1;
    int num2;
    int sum;
    char buff[105];

    printf("This program adds two numbers \n");

    printf("Enter first number b/w [0-100]: \n");
    fgets(buff, 105, stdin);
    sscanf(buff, "%d", &num1);

    printf("Enter second number b/w [0-100]: \n");
    fgets(buff, 105, stdin);
    sscanf(buff, "%d", &num2);

    printf("You entered #1: %d and #2: %d \n", num1, num2);

    sum = num1 + num2;

    printf("Sum of two numbers is: %d \n", sum);
}

