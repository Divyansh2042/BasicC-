#include<iostream>
//First program in c++
using namespace std;
namespace space1{
    int a=100;
    void show()
    {
        cout<<"Divyansh has "<<a<<" Rupees";
    }
}
namespace space2{
    int a=100;
    void show()
    {
        cout<<"Divyansh has "<<a<<" Rupees";
    }
}
int main()
{
    space1::show();
    space2::show();
}