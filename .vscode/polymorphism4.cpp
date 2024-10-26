# include <iostream>
using namespace std;
class A{
    public:
     void show (){
        cout<<"it is class a."<<endl;
    }
};
class B:A{
    public:
     void show (){
        A::show();
        cout<<"it is class b,"<<endl;
    }
};
 int main (){
    B obj;
    obj.show();
 }