#include <stdio.h>


int calculate_total(int m1, int m2, int m3, int m4)
{
    return m1 + m2 + m3 + m4;
}
float average (int total){
    return total/4.0;
}
int main() {
int m1=78, m2=67, m3=69, m4=65;

int total = calculate_total(m1, m2, m3, m4);
printf("Total marks %d\n", calculate_total(m1, m2, m3, m4)); 

float avg=average(total);
printf("Average is %f\n", avg);


}