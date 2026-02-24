/*
Arithmetic operators :
+ - * % /

Modulus operator returns the remainder of a division operation. It is represented by the symbol %.
for example
12345 % 10 will return 5, which is the last digit of the number.
*/

#include <stdio.h>
int main() {
    int a= 10, b= 5;
    printf("Addition: %d\n", a+b); // addition operator
    printf("Subtraction: %d\n", a-b); // subtraction operator
    printf("Multiplication: %d\n", a*b); // multiplication operator
    printf("Division: %d\n", a/b); // division operator
    printf("Modulus: %d\n", a%b); // modulus operator
    return 0;
}