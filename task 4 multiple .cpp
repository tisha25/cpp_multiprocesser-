#include <iostream>
using namespace std;

class sum {
   
   public:
   
    int n;
    
    void getNum(int x) {
        n = x;
    }
    
    void dispNum(){
        cout << "Number is: " << n;
    }
    
    sum operator+(sum& obj){
        sum x; 
        x.n = this->n + obj.n;
        return (x); 
    }
};

int main(){
    sum num1, num2, add;
    num1.getNum(10);
    num2.getNum(20);

    
add= num1 + num2;

    add.dispNum();
    cout << endl;


}
