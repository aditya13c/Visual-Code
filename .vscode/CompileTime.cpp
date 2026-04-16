#include<iostream>
using namespace std;
/*
Compile time: Same function name with different parameters (function overloading)
or same function name with different number of parameters (function overloading)
or same function name with different data types of parameters (function overloading)
*/
class compile{
    public:
    void setValue(int value){
        cout<<"Integer Value: "<<value<<endl;
    }
    void setValue(double value){
        cout<<"Double Value: "<<value<<endl;
    }
};

int main(){
    compile c;
    c.setValue(120);
    c.setValue(27.422);
    return 0;
}