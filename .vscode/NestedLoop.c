#include <stdio.h>
int main() {
    /*
     1 2 3 4
     1 2 3 4
     1 2 3 4 
    */
   for (int i=1;i<=3;i++){
    for(int j=1;j<=4;j++){
        printf("%d ",j);
    }
    printf("\n");
   }
  

/*
* * * 
* * *
* * *   
* * *
*/
for (int i=1;i<=4;i++){
    for (int j=1;j<=3;j++){
        printf(" * ");
    }
    printf("\n");
}

/*
1
1 2
1 2 3 
1 2 3 4
1 2 3 4 5
*/
for (int i=1;i<=5;i++){
    for (int j=1;j<=i;j++){
        printf(" %d ",j);
        
    }
    printf("\n");
}
/*
*
* *
* * *
* * * *
* * * * *
*/
for (int i=1;i<=5;i++){
    for (int j=1;j<=i;j++){
        printf(" * ");
        
    }
    printf("\n");
}
return 0;
}



