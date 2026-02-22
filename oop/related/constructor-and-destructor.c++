// constructor and destructor are special member functions of a class that are used to initialize and destroy objects of that class.
// constructor is a special member function that is used to initialize objects of a class.
// destructor is a special member function that is used to destroy objects of a class.

#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass();
    MyClass(int x);
    MyClass(int x, int y);
    ~MyClass();
    void display();
private:
    int x;
    int y;
};

class MyClass2
{
    MyClass = delete; // delete the constructor of MyClass
};


int main()
{
    MyClass obj;
    MyClass obj2(10);
    MyClass obj3(10, 20);
    obj.display();
    obj2.display();
    obj3.display();
    delete obj; // delete the object of MyClass and call the destructor
    MyClass2 obj4; // this will give error because the constructor of MyClass is deleted
    return 0;
}