#include <iostream> // stdio :standard input output
#include <ctime>

using namespace std;
/*
Game
step 1: random number generate
step 2: take number from user
step 3: check if number equals to the random number if 
yes stop else repeat
*/
int main() {
   srand(time(0)); 
   int number=rand()%100+1; //1234
    int no;
    while(no!=number){
cout<<"Enter a number :";
   cin>>no;

   if(no>number){
    cout<<"Number is greater than random number"<<endl;
   }
   else if(no<number){
    cout<<"Number is smaller than random number"<<endl;
   }else{
    cout<<"Correct Number!!!"<<endl;
   }
    }
   


}