#include <iostream>
using namespace std;

class player {
    public:
    int health=100;
};
class Warrior:public player{
    public:
    int strength=50;
    int totalStrength(){
        return strength*2;
    }
};
class SuperWarrior:public Warrior{
    public:
    int special_power=100;
    int totalPower(){
        return special_power+totalStrength();
    }
};
int main(){
   SuperWarrior sp;
    cout <<"total :"<<sp.totalPower()<<endl;
}