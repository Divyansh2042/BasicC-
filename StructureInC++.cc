#include<iostream>
using namespace std;
struct person{
    char name[40];
    int age;
    double salary;
};
int main()
{
    person p1;
    cout<<"Person detail"<<endl;
    cout<<"Person Name"<<endl;
    cin>>p1.name;
    cout<<"Person age"<<endl;
    cin>>p1.age;
    cout<<"Person salary"<<endl;
    cin>>p1.salary;

    
}