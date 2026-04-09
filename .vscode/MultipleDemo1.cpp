#include<iostream>
using namespace std;
class basesalary{
    public :
    int base_salary = 50000;

};
class bonus{
    public:
    int bonus=10000;

};
class totalsalary:public basesalary,public bonus{
    public:
   int total_salary=base_salary+bonus;
   void total_salary_calculate(){
       cout<<"total salary is "<<total_salary<<endl;
    }
};
int main(){
    totalsalary ts1;
    ts1.total_salary_calculate();
    return 0;
}