#include <iostream>
using namespace std;
class CompleNumber
{
private:
    int real;
    float imaginary;

public:
    CompleNumber()
    {
    }
    CompleNumber(int r, float i)
    {
        real = r;
        imaginary = i;
    }
    void display()
    {
        cout << "Complex Number is :" << real << "+" << imaginary << "i" << endl
             << endl;
    }
    int realPart()
    {
        return real;
    }
    int imaginaryPart()
    {
        return imaginary;
    }
};
CompleNumber addNumber(CompleNumber n1,CompleNumber n2)
{
    int r;
    float i;
    r=n1.realPart()+n2.realPart();
    i=n1.imaginaryPart()+n2.imaginaryPart();
    CompleNumber temp(r,i);
    return temp;
}
int main()
{
    CompleNumber comp1(5,4),comp2(5,3),comp3;
    comp1.display();
    comp2.display();
    comp3=addNumber(comp1,comp2);
    comp3.display();
    CompleNumber *ptr;
    ptr=&comp3;
    ptr->display();



    return 0;
}