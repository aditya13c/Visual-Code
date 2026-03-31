#include <iostream>
using namespace std;
/*
take 5  numbers from user and find maximum number among them
pass all value to a function and find maximum number among them
1 2 3 5 4
*/
int find_max(int a[]){
    int max=a[0];
    for(int i=1;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}

int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cout<<"Enter a number :";
        cin>>a[i];
    }
    cout<<"Maximum : "<<find_max(a)<<endl;
    return 0;
}