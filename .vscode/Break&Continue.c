#include <stdio.h> //stdio: standard input output header file
int main() {


    for(int i=1; i<=10; i++) 
    {
        if(i==5)
        {
            break;
        }
        printf("\n %d\n",i);
    }
int j=0;
while (j<=9)
{
    j++;
    if (j==3 || j==5)
    {
        continue; //continue: it is used to skip the current iteration of a loop and move to the next iteration.
    }
    printf(" %d ", j);
}
for (int i=1;i<=10;i++)
{
    if (i%2==0)
    if (i==6)
    {
        continue; //continue: it is used to skip the current iteration of a loop and move to the next iteration.
    }
    printf("\n %d ", i);
    
}



return 0;
}
