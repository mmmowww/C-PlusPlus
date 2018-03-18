#include <iostream>
using namespace std;

class ABC
{
private: // Закрытые данные     
int x;
int y;
int z;
int xyz(int,int)
{
int z;
z= x + y;
cout << z;
};
public: // Открытые 
int x1;
int y1;
int z1;
int xyz1(int, int)
{
int z1;
z1=x1+y1;
cout << z1;
};
protected: // Для наследования
int x2;
int y2;
int z2;
int xyz2(int, int)
{
int z2;
z2=x2+y2;
cout << z2;
};
};

int main()
{

ABC xyz;
int rt = 0;
int rt1 =0;
xyz.x1 = 23;
xyz.y1 = 23;
int z = 0;
xyz.x1 = rt;
xyz.y1 = rt1;
z = rt + rt1;
cout << z;
cin >> z;

};
