# include <iostream>

using namespace std;
class A{
    private:
        int a,b;
    public:
       A (int x, int y){
       a=x; b=y;
       }
    void display ()
    {
        cout<<a<<" "<<b;
    }

};
int main (){
    A obj(10,20);
    obj.display();
}
