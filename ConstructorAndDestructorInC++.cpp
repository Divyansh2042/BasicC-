#include <iostream>
#include <string>
using namespace std;
class Cars
{
private:
    string car_name;
    string car_model;
    int price;

public:
    Cars()
    {
        car_model = "rx100";
    }
    Cars(string name, string model, int p)
    {
        car_name = name;
        car_model = model;
        price = p;
    }
    Cars(Cars &obj2)
    {
        car_name = obj2.car_name;
        car_model = obj2.car_model;
        price = obj2.price;
    }
    void setData(string name, string model, int p)
    {
        car_name = name;
        car_model = model;
        price = p;
    }
    void getData()

    {
        cout << "Car model::" << car_model << endl;
        cout << "Car name::" << car_name << endl;
        cout << "Car price::" << price << endl;
    }
    ~Cars()
    {
        cout << "object deleted" << endl;
    }
};
int main()
{
    Cars obj1;
    Cars obj("Toyota", "SRs", 500000);
    obj1.setData("DEva", "Rx", 90000);
    obj.getData();
    obj1.getData();
    Cars ob3 = obj;
    ob3.getData();
}