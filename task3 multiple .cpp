#include<iostream>

using namespace std;

class data{
    public:
    
    
    int num=100;
    void operator ++(){
        
        num++;
        cout<<"valu of number ++ :-"<<num<<endl;
    }
    
    
    void operator --(){
        
        num--;
        cout<<"valu of number -- :-"<<num<<endl;
    }

};

main(){
    
    data obj;
    ++ obj;
    -- obj;
    
    
}
