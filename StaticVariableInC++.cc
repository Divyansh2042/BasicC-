// #include<iostream>
// using namespace std;
// //c
// class shop
// {
//     private:
//     int itemsId[100];
//     int itemPrice[100];
//     int counter;
//     public:
//     void initCouter(void)
//     {
//         counter=0;
//     }
//     void getPrice(void);
//     void setPrice(void);
// };
// void shop::setPrice(void)
// {
//     cout<<"Enter the id of your items"<<counter+1<<endl;
//     cin>>itemsId[counter];
//     cout<<"Enter the price of the your items"<<endl;
//     cin>>itemPrice[counter];
//     counter++;

// }
// void shop::getPrice(void)
// {
//     for(int i=0;i<counter;i++)
//     {
//         cout<<"The price of item with id "<<itemsId[i]<<" is "<<itemPrice[i]<<endl;

//     }
// }
// int main()
// {
// shop dukan;
// dukan.initCouter();
// dukan.setPrice();
// dukan.setPrice();
// dukan.setPrice();
// dukan.getPrice();

// }

// #include<iostream>
// using namespace std;
// class shop
// {
//   int id;
//  static int count;
//   public: 
//   void setData(void)
//   {
//     cout<<"Enter the id"<<endl;
//     cin>>id;
//     count++;
//   }
//   void getData(void)
//   {
//     cout<<"The id of this employee is "<<id<<" the no of employee are"<<count<<endl;
//   }
//   static void getCount(void)
//   {
//     cout<<"The value of count is"<<count<<endl;
//   }
// };
// int shop::count=1000;
// int main()
// {
//     shop dukan,shila ,divya;
//     dukan.setData();
//     dukan.getData();
//     shop::getCount();
//     shila.setData();
//     shila.getData();
//      shop::getCount();
//     divya.setData();
//     divya.getData();
//      shop::getCount();
// }

#include<iostream>
using namespace std;
class Objcount
{
  int x;
  public :
   static int count;
   Objcount()
   {
    count++;
   }
};
int Objcount::count=0;
int main()
{
  cout<<"Initial count"<<Objcount::count<<endl;
  Objcount ob[9];
  cout<<"Final count"<<Objcount::count<<endl;
}