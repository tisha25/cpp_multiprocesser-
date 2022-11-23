#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inches;
    
    void readDistance()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    
    void dispDistance()
    {
        cout << "Feet:" << feet << "\t"
             << "Inches:" << inches << endl;
    }


    Distance operator+(Distance& dist1)
    {
        Distance tempD; 
        tempD.inches = inches + dist1.inches;
        tempD.feet = feet + dist1.feet;
        return tempD;
    }
};

int main()
{
    Distance D1, D2, D3;

    cout << "Enter first  distance:" << endl;
    D1.readDistance();
    cout << endl;

    cout << "Enter second distance:" << endl;
    D2.readDistance();
    cout << endl;

    
    D3 = D1 + D2;

    cout << "Total Distance:" << endl;
    D3.dispDistance();

    cout << endl;

    return 0;
}
