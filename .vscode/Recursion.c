/*
Recursion: Is Function calling function itself, either directly or indirectly. 
It is a powerful tool for solving problems that can be broken down into smaller, similar subproblems. 
A recursive function typically has two main components: a base case that stops the recursion and 
a recursive case that breaks the problem into smaller parts.
*/
#include <stdio.h>
void print(int n)
{
    if(n>5)
    {
        return; // base case
    }
    printf("\n %d \n", n);
    print(n + 1); 
}

int main ()
{
    print(1);
    return 0;
}