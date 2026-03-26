#include <stdio.h>
#include <stdlib.h>
/*
malloc : dynamic memory allocation
data structure 
array
int a[100]
20


*/

int main() {
    int *arr;
    int n;
    printf("\nEnter the size :");
    scanf("%d",&n);

    arr=(int*)malloc(n * sizeof(int));
    // printf("Enter the value :");
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);

    // }
    for(int i=0;i<n;i++){
        printf("\n%d\n",arr[i]);
    }
    free(arr);

    return 0;
}
