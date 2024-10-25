#include<iostream>
using namespace std;
class subhamay; 
class subhraneel{
    private:
    int money = 10;
    friend void swastik (subhraneel,subhamay);
};
class subhamay {
    private:
    int money = 20;
    friend void swastik (subhraneel,subhamay);
};
void swastik (subhraneel r1,subhamay r2){
    cout<<"sum" << r1.money+r2.money;
}
int main(){
    subhamay obj2; subhraneel obj1;
    swastik (obj1,obj2) ; 
    return 0;
}