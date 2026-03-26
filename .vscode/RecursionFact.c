#include <stdio.h>
int fact(int n)
{
    if(n==1) 
    {
        return 1;
    }
    return (n*fact(n-1));
}
int main()
{
    printf("%d",fact(5)); ///5*4*3*2*1=120
    return 0;
}