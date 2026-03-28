#include  <iostream>
using namespace std;
/*
calculator:
step 1: take input from user (number1, number2)
step 2: take operator as input (+, -, *, /)
step 3: perform operation based on operator
step 4: display result
*/
int main() {
    int num1, num2;
    char op;
    cout<<"Enter first number :";
    cin>>num1;
    cout<<"Enter second number :";
    cin>>num2;
    cout<<"Enter operator (+, -, *, /, %) :";
    cin>>op;

    switch(op){
        case '+':
            cout<<"Result : "<<num1 + num2<<endl;
            break;
        case '-':
            cout<<"Result : "<<num1 - num2<<endl;
            break;
        case '*':
            cout<<"Result : "<<num1 * num2<<endl;
            break;
        case '%':
            if(num2 != 0){
                cout<<"Result : "<<num1 % num2<<endl;
            } else {
                cout<<"Error: Modulo by zero is not allowed."<<endl;
            }
            break;    
        case '/':
            if(num2 != 0){
                cout<<"Result : "<<num1 / num2<<endl;
            } else {
                cout<<"Error: Division by zero is not allowed."<<endl;
            }
            break;
        default:
            cout<<"Invalid operator!"<<endl;
    }

    return 0;
}