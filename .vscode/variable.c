/*
Variable: it is a container to store the value, var can be changed 
const= value cannot be chaged 
*/
#include <stdio.h>
#define year 2026 // constant variable using macro
int main() {
    int salary= 100000; // variable declaration and initialization
    salary= 200000; // variable value can be changed
    const double pi= 3.14; // constant variable declaration and initialization
    printf("\nMy salary is %d\n", salary);
    
    int age = 25; 
    age = 30; 
    printf("\nMy age is %d\n", age);
    printf("\n ADC :%f", (pi*5*5)); // using constant variable in calculation

}