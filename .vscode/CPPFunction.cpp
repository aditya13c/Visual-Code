#include <iostream>
using namespace std;
/*
Even Odd
*/

void even_odd(int num){
    if(num%2==0){
        cout<<"Even Number"<<endl;
    }else{
        cout<<"Odd Number"<<endl;
    }
    
}
int main() {
    int num;
    cout<<"Enter a Number :";
    cin>>num;
    even_odd(num);
    return 0;
}
