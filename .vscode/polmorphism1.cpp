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
   A*ptr; B obj;
   ptr =& obj;
    obj.display();
    return 0;
}
