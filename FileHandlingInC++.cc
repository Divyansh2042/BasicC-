//File handling in C++
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char arr[100];
    cout<<"Enter the name and ages ";
    cin.getline(arr,100);

    int x;float y;
    fstream myfile("abc.txt",ios::out);
    // myfile.open("abc.txt");
    myfile<<arr;
    myfile.close();
   cout<<"file write operation successfully"<<endl;

   //reading from a file
   cout<<"Reading a file"<<endl;
   char arr1[100];
   ifstream obj("abc.txt");
   obj.getline(arr1,100);
   cout<<"Arr content:"<<arr;
}