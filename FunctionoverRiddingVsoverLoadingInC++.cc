#include <iostream>
using namespace std;
class Animal
{
public:
    void makeSound()
    {
        cout << "make sound" << endl;
    }
} ;
class dog : public Animal
{
// public:
//     void makeSound()
//     {
//         cout << "dog bark" << endl;
//     }
};
class cat : public Animal
{
public:
    void makeSound()
    {
        cout << "cat meow" << endl;
    }
};
int main()
{
    Animal ob;
    ob.makeSound();
    dog ob1;
     ob1.makeSound();
    cat ob2;
    ob2.makeSound();
}