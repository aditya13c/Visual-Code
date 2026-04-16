#include<iostream>
using namespace std;

class notification
{
    public:
    virtual void send()
    {
        cout<<"base notification"<<endl;
    }
};
class pushNotification:public notification
{
    public:
    void send()
    {
        cout<<"push notification"<<endl;
    }
};
class emailNotification:public notification
{
    public:
    void send()
    {
        cout<<"email notification"<<endl;
    }
};
class smsNotification:public notification
{
    public:
    void send()
    {
        cout<<"sms notification"<<endl;
    }
};
int main()
{
    notification* n;
    pushNotification pn;
    emailNotification en;
    smsNotification sn;
    n=&pn;
    n->send();
    n=&en;
    n->send();
    n=&sn;
    n->send();
    return 0;
}