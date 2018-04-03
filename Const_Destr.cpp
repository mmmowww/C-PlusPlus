#include <iostream>
using namespace std;


class MyClass
{
public:
    int x;
    MyClass(int i);  //Konst
    ~MyClass();      //Destr
};
MyClass::MyClass(int i)
{ x = i;
};
MyClass::~MyClass();

int main()
{
MyClass t1(5);
MyClass t2(67);

cout << t1.x,, " " << t2.x<<"\n";
return 0;
};
