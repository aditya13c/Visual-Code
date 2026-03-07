#include <stdio.h>
int main() {
    /*
     1 2 3 4
     1 2 3 4
     1 2 3 4 
    */
//    for (int i=1;i<=3;i++){
//     for(int j=1;j<=4;j++){
//         printf("%d ",j);
//     }
//     printf("\n");
//    }
  

/*
* * * 
* * *
* * *   
* * *
*/
// for (int i=1;i<=4;i++){
//     for (int j=1;j<=3;j++){
//         printf(" * ");
//     }
//     printf("\n");
// }

/*
1
1 2
1 2 3 
1 2 3 4
1 2 3 4 5
*/
// for (int i=1;i<=5;i++){
//     for (int j=1;j<=i;j++){
//         printf(" %d ",j);
        
//     }
//     printf("\n");
// }
/*
*
* *
* * *
* * * *
* * * * *
*/
// for (int i=1;i<=5;i++){
//     for (int j=1;j<=i;j++){
//         printf(" * ");
        
//     }
//     printf("\n");
// }


/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5  

for k :
completely depends on i
*/

// for (int i=1;i<=5;i++){
//     for (int k=i;k<=5;k++){
//         printf(" ");
//     }
// for (int j=1;j<=i;j++){
//     printf("%d ",j);
// }
// printf("\n");

// }


/*
   1
   10
   101
   1010
   10101
*/
// for (int i=1;i<=5;i++){
//     for (int j=1;j<=i;j++){
//         if (j % 2==0){
//             printf("0");
//         }
//         else{
//             printf("1");
//         }
//     }
//     printf("\n");
// }
/* One more pattern*/
// for (int i=1;i<=5;i++){
//     for (int j=1;j<=i;j++){
//         printf("%d",j%2);
//     }
//     printf("\n");
// }

/*
1
12
123 
1234
12345
*/
// for (int i=1;i<=5;i++){
//     for (int j=1;j<=i;j++){
//         printf("%d",j);
        
//     }
//     printf("\n");
// }
/*
   
     *  
    * *
   *****
  *     *
 *       *
  */
// for (int i=1;i<=5;i++){
//     for (int k=i;k<=5;k++){ 
//         printf(" ");
//     }       
//     for (int j=1;j<=i*2-1;j++){
//         if (i==3 || j==1 || j==i*2-1){
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
        
//     }
//     printf("\n");
// }

/*
    *    1 1*2 2-1
   ***   2 2*2 4-1
  *****  3 3*2 6-1
   ***
    *  
*/
for (int i=1;i<=3;i++){
    for (int k=i;k<=3;k++){
        printf(" ");
    }
    for (int j=1;j<=i*2-1;j++){
        printf("*");
    }
    printf("\n");
}

for (int i=2;i>=1;i--){
    for (int k=i;k<=3;k++){
        printf(" ");
    }
    for (int j=1;j<=i*2-1;j++){
        printf("*");
    }
    printf("\n");
}


return 0;
}

    
