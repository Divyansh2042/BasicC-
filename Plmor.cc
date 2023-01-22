#include<iostream>
using namespace std;
class base
{
public :
   void show()
   {
    cout<<"Base cllass"<<endl;
   }
   virtual void print()
   {
    cout<<"Base class"<<endl;
   }
};
class derive:public base{
    public:
    void show()
    {
        cout<<"Derived class"<<endl;
    }
    void print()
    {
        cout<<"Derived class 2"<<endl;
    }
};
int main()
{
    base *ptr;
    derive der;
    ptr=&der;
    ptr->print();
    ptr->show();
}