#include <stdio.h>
#include <stdio.h>

//function without parameters and without return type
void greet() {
    printf ("\nHello World\n");
}

//function with parameters and without return type
void sum(int a, int b) {
    printf("\nSum is %d\n", a+b);
}

//function without parameters and with return type
int mul() {
    int a=48,b=90;
    return a*b;
}

//function with parameters and with return type
float div(int a,int b) {
    return (float)a/b;
}

int main() {
    greet();
    sum(10,20);
    printf("mul is %d" ,mul());
    printf("\ndiv is %f" ,div(10,3));
    return 0;
}