#include <stdio.h> //stdio: standard input output header file
int main() {

// int j=0;
// while (j<=9)
// {
//     j++;
//     if (j==1 || j==3 || j==5 || j==7 || j==9)
//     {
//         continue; //continue: it is used to skip the current iteration of a loop and move to the next iteration.
//     }
//     printf(" %d ", j);
// }

for (int i=1;i<=10;i++){
    if (i%2!=0)
    continue;
    printf("%d " , i);
    
}
return 0;
}