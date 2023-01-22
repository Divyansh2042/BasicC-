#include<iostream>
using namespace std;
int main()
{
    int num,mun,result=0;
    cout<<"Enter the numerator"<<endl;
    cin>>num;
    cout<<"Enter the denominator"<<endl;
    cin>>mun;
    try{
        if(mun==0){
            throw mun;
        }
        result=num/mun;
        
    }
    catch(int ex)
    {
        cout<<"Exception:Divide by zero is not allowed "<<ex<<endl;
    }

    cout<<"Division is "<<result;
}