#include <stdio.h>
/*
Goto : Goto is a control flow statement that allows you to jump to a specific label in the code.
 It is generally considered bad practice to use goto statements, as they can make code harder to read and maintain. 
However, it can be useful in certain situations, such as breaking out of nested loops or handling error conditions.
*/

int main () {
/*  1st example of goto statement  
printf("\nStart\n");
    goto end;
    printf("This line will not print");
    end:
    printf("\nEnd\n");
    */

int i=1;
start:  //if i will remove the start from the code and remove the goto, then the code output will only be 1.
if(i<=5)
{
    printf("\n%d\n",i);
    i++;
    goto start;
}
    return 0;
}


