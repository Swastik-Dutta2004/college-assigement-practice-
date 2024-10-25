# include <iostream>
using namespace std;

class factorial{
    public:

        int findfactorial(int n){
        int fact = 1;
        for(int i = 1; i<= n; i++){
            fact*=i;
        }
        return fact;
    }
};

int main(){
    
    factorial f;
    int num;

        cout << "enter a number to find the factorial: ";
        cin >> num;

    int result = f.findfactorial(num)
        cout << "factorial of "<< num <<"is:"<< result << endl;

        return 0 ; 

    }

