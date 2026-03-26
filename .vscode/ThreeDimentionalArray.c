#include <stdio.h> // stdio :standard input output
int main() {
    int sum=0;
    int a[2][2][2]={
        {{1,2},{3,4}},
        {{5,6},{7,8}}
    };

   for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        for(int k=0;k<2;k++){
            sum=sum+a[i][j][k];
        }
    }
   }

   printf("sum is :%d",sum);
    return 0;
}