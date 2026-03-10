/*
Array: A data structure that can hold a fixed number of values of the same type.
In C, arrays are declared with a specific size and type, and they can be accessed using an index. The index starts at 0,
meaning the first element of the array is accessed with index 0, the second element with index 1, and so on.
*/
#include <stdio.h>
int main() {
    // Student marks of 5 subjects
    // int a[5]= {55,45,47,65,74},total=0;
    // for (int i=0;i<5;i++){
    //     printf("\nsubject %d marks: %d",i+1,a[i]);
    // total=total+a[i];
    
    // }
    // printf("\ntotal marks: %d",total);


    // int a[5]= {55,45,47,65,74};
    //     for (int i=0;i<5;i++){
    //         printf("\n %d",a[i]);
    //     }
   
   /*
   in array the value start with 0,1,2,3,4 like the numbering of arrayare these
   if we want only one value the code will be:
   int a[5]= {55,45,47,65,74};
        for (int i=0;i<5;i++){
            printf("\n %d",a[3]);
        }
   */

//    int temp[7]={23,34,43,25,12,20,18};
//    for (int i=0;i<7;i++){
//     printf("\nDay %d: Temp %d\n",i+1,temp[i]);
//    }
   
   /*
   if any value in the code is in decimal then int will be replaced by float and the %d will be replaced by %f in the printf statement.
   */


//  float temp[7]={23,34.8,43.7,25.2,12,20,18.9};
//    for (int i=0;i<7;i++){
//     printf("\nDay %d: Temp %f\n",i+1,temp[i]);
//    }
   
/*
que: score [100,123,178,230]
player 1 score: 100
*/

int score[4]={100,123,178,230},total=0;
for (int  i=0;i<4;i++){
    printf("\nPlayer %d - Score: %d\n",i+1,score[i]);
    total = total + score[i];
}
printf("\nTotal Score: %d\n",total);


        return 0;

}
