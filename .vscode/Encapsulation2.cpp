#include<iostream>
using namespace std;
/*
protected: accessible within the class and by derived classes
*/
class Salary{
    protected:
    int sal;

    public:
    void setSal(int s){
        sal = s;
    }
};

class Manager : public Salary{
    public:
    void info(){
        setSal(150000);
        cout<<"Salary is "<<sal<<endl;
    }
};
int main(){
    Manager m;
    m.info();
    return 0;
}    