# include <iostream>
using namespace std ;
class A{
    public:
    void display() {
        cout<<"it is class a";
    }
};
 class B : public A{
    public:
    void display(){
        cout<<"it is class B";
    }
 };
 main()
{
    B obj;
    obj.display();
    return 0;
}
