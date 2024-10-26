# include <iostream>
using namespace std;

class Distance {
    private :
        int meters ;

    public :
         Distance (){
             meters = 0;
    }

    void display (){
        cout<<"meter is :"<<meters;
    }

    friend void addvalue(Distance &d);
};

void addvalue (Distance &d){
    d.meters = d.meters + 5;
}

int main(){
    Distance d1;
    d1.display();

    d1.addvalue (d1);
    d1.display();

    return 0;
}