#include<iostream>
using namespace std;
class mybase
{
    private:int x;
    public: 
     mybase()
    {
        x=5;
        y=5;
        x=8;
    }
    int y;
    private:int z;
    void displayData()
    {
        cout<<"Y:"<<y<<endl;
    }

};
class mypublicDerive:public mybase
{

};
class myprotectedDerive:protected mybase
{

};
class myPrivate:private mybase{

};
int main()
{
    myprotectedDerive base;
    cout<<"Y: "<<base.y;
}
