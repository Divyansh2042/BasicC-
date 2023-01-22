#include<iostream>
using namespace std;
//base class
class shape
{
    protected:
    int width;
    int height;
    public :
     void setWidth(int w)
    {
        width=w;
    }
    void setheight(int h)
    {
        height=h;
    }

};
//derived class
class rectangle:public shape{
    public:
    int getArea()
    {
        return width*height;
    }
};
int main(){
    rectangle rect;
    rect.setWidth(8);
    rect.setheight(8);
    cout<<"The area is ::"<<rect.getArea()<<endl;

}