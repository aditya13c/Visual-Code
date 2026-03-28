#include <iostream>
using namespace std;
/*
step 1: 
1. Check balance
2. Withdraw money
3. Deposit money
4. Exit

*/
int main() {
    int choice;
    while (true) {
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Withdraw Money"<<endl;
    cout<<"3. Deposit Money"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    double balance = 100000; // Initial balance
    switch(choice){
        case 1:
            cout<<"Your balance is : "<<balance<<endl;
            break;
        case 2:
            double withdrawAmount;
            cout<<"Enter amount to withdraw :";
            cin>>withdrawAmount;
            if(withdrawAmount > balance){
                cout<<"Insufficient balance!"<<endl;
            } else {
                balance -= withdrawAmount;
                cout<<"You have withdrawn : "<<withdrawAmount<<endl;
                cout<<"Remaining balance : "<<balance<<endl;
            }
            break;
        case 3:
            double depositAmount;
            cout<<"Enter amount to deposit :";
            cin>>depositAmount;
            balance += depositAmount;
            cout<<"You have deposited : "<<depositAmount<<endl;
            cout<<"New balance : "<<balance<<endl;
            break;    
        case 4:
            cout<<"Thank you for using our ATM. Goodbye!"<<endl;
            return 0; // Exit the program
        default:
            cout<<"Invalid choice! Please try again."<<endl;
    }

   }
}