#include <iostream>
using namespace std;
/// ����� �������
class Help
{ 
public:
void helpon(char what);
void showmenu();
bool isvalid(char ch);
};
/// ����� ���������� �����������
void Help::helpon(char what)
{
switch(what)
{
case '1':
cout << "����������� if";
cout << "if (�������)";
cout << "else �����������";
break;
case '2':
cout << "����������� switch\n";
cout << "switch(���������)\n";
cout << "{";
cout << "case ���������\n";
cout << "������������������ �����������\n";
cout << "break;\n";
cout << "////\n";
cout << "};\n";
cout << "\n";
break;
case'3':
cout << "���� for\n";
cout << "for(�������������;�������;����������)\n";
cout << "{�����������\n";
cout << "};\n";
break;
case '4':
cout << "���� while\n";
cout << "while(�������)\n";
break;
case '5':       
cout << "���� do-while\n";
cout << "do {\n";
cout << "�����������;\n";
cout << "};\n";
cout << "while(�������)\n";
break;
case '6':
cout << "����������� break\n";
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
cout << "���� �� ������� �������� ����������\n";
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
