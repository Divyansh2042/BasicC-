#include <iostream>
using namespace std;
class sample1;
class sample
{
private:
    int a;
    int b;
public:
    void set(int a3,int b3)
    {
        a=a3;
        b=b3;
    }
    friend void swap1(sample &s1,sample1 &s2);
    void display()
    {
        cout<<"a="<<a<<"b="<<b<<endl;
    }
};
class sample1
{
private:
    int a1;
    int a2;
public :
    friend void swap1(sample &s1,sample1 &s2);
     void set1(int a3,int b3)
    {
        a1=a3;
        a2=b3;
    }
    void display1()
    {
        cout<<"a1="<<a1<<"b2="<<a2<<endl;
    }

};
void swap1(sample &s1,sample1 &s2)
{
    int temp;
    temp=s1.a;
    s1.a=s2.a1;
    s2.a1=temp;
    int temp1;
    temp1=s1.b;
    s1.b=s2.a2;
    s2.a2=temp1;

}
int main()
{
    sample s1;
    sample1 s2;
    s1.set(5,6);
    s2.set1(3,2);
    s1.display();
    s2.display1();
    swap1(s1,s2);
    s1.display();
    s2.display1();
}
