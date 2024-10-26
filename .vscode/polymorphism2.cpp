# include <iostream>
using namespace std;
void showinfo(int age){
    cout<<"age is:"<<age<< endl;
}
void showinfo(string name){
    cout<<"name is:"<<name<< endl;
}
void showinfo(double salary){
    cout<<"salary is:"<<salary<< endl;
}

 int main(){
    showinfo(43);
    showinfo("deb");
    showinfo(500000);

 }
