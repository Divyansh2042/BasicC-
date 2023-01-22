#include<iostream>
using namespace std;
class Complex
{
  int a;
  int b;
  public:
  void setNumber(int n1,int n2)
  {
    a=n1;
    b=n2;
 }
 friend Complex sumcomplex(Complex o1,Complex o2);
 void printNumber()
 {
  cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
}
};
Complex sumcomplex(Complex o1,Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    Complex c1,c2,c3;
    c1.setNumber(2,4);
    c2.setNumber(2,4);
    c1.printNumber();
    c2.printNumber();
    c3=sumcomplex(c1,c2);
    c3.printNumber();
}