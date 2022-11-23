#include <iostream>
using namespace std;
class addition
{
public:
int addMethod(int x, int y)
{
return x + y;
}
int addMethod(int x, int y, int z)
{
return x + y + z;
}
};
int main(void)
{
addition add;
cout << add.addMethod(2, 3) << endl;
cout << add.addMethod(2, 3, 6) << endl;
return 0;
}
