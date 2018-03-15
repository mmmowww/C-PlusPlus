#include <iostream>
using namespace std;
/// Класс справки
class Help
{ 
public:
void helpon(char what);
void showmenu();
bool isvalid(char ch);
};
/// Вывод справочной инофрмацыии
void Help::helpon(char what)
{
switch(what)
{
case '1':
cout << "Предложение if";
cout << "if (условие)";
cout << "else предложение";
break;
case '2':
cout << "Предложение switch\n";
cout << "switch(вырожение)\n";
cout << "{";
cout << "case константа\n";
cout << "последовательность предложений\n";
cout << "break;\n";
cout << "////\n";
cout << "};\n";
cout << "\n";
break;
case'3':
cout << "цыкл for\n";
cout << "for(иницыализацыя;условие;прирощение)\n";
cout << "{предложение\n";
cout << "};\n";
break;
case '4':
cout << "Цыкл while\n";
cout << "while(условие)\n";
break;
case '5':       
cout << "Цыкл do-while\n";
cout << "do {\n";
cout << "Предложение;\n";
cout << "};\n";
cout << "while(Условие)\n";
break;
case '6':
cout << "Предложение break\n";
cout << "break;\n";
break;
}
cout << "\a \n";
void Help::showmenu(){
cout << "1 if\n";
cout << "2 switch\n";
cout << "3 for\n";
cout << "4 while\n";
cout << "5 do while\n";
cout << "6 break\n";
cout << "Один из пунктов выберите пожалуйста\n";
bool help::isvalid(char ch) 
}
if(ch < '1' || ch > '8' && ch != 'q')
{ return false;
 else
 return true;
}
int main()
{
char choise;
Help hlpob;
for(;;)
{
do
{
hlpob.showmenu();
cin >> choise;
} 
while(!hlpob.isvalid(choice));
if(choise =="q") break;
cout <<"\n";
hlpob.helpon(choice);
}
return 0;
}
