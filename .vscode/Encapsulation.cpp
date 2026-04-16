#include<iostream>
using namespace std;
/*
private: only accessible within the class
public: accessible from outside the class
protected: accessible within the class and by derived classes
*/
class BankAcccount{
    private:
    int amount;
    public:
    void setAmount(int a){
        amount = a;
    }
    int getAmount(){
        return amount;
    }
};
int main(){
    BankAcccount ba;
    ba.setAmount(1000);
    cout<<"Amount in the account: "<<ba.getAmount()<<endl;
    return 0;
}