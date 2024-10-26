# include <iostream>
using namespace std;

class father {
protected:
    string Surname = " mondal";
};

class son1: father{
    string name = "shivaditya";
    public:
    void show (){
        cout<<name<<" "<<Surname<<endl;
    }
};

class son2 : father{
    string name = "aditya";
    public:
    void display(){
        cout<<name<<" "<<Surname;
    }
};

int main(){
    son1 d1;
    d1.show ();

    son2 d2;
    d2.display();
}