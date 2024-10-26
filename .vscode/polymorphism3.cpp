            //compiletime polymorphism 

# include<iostream>
using namespace std;
class A {
    int a = 20; int b = 30;
public:
    void add(){
        int sum = a+b;
        cout<<"sum of the two number is:"<< sum<<endl;
}
public:
     void add(int a, int b){
        int sum = a+b;
        cout<<"sum of the tewo number is :"<<sum;
     }

    };

    int main(){
        A obj;
        obj.add(40,60);
        obj.add();
    }
