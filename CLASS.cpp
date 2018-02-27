// Мой первый класс
#include <iostream>
using namespace std;
// Class
class Bac{
public:
int Virus;
int Bacil;
int Rad;
};

int main()
{
Bac human; // обект класса как я понял делаем ярлык для обращение в класс
Bac animal; // шилд 316 стр

human.Virus = 654;
human.Bacil = 33;
human.Rad = 43;

cout <<human.Virus;
return 0;
}
