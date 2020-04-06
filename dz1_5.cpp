#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	setlocale(LC_ALL, "Russian");
	cout<<"Введите состояние лампы, где 0-выключена, 1-вкючена"<<endl;
	cin>>a;
	cout<<"Введите состояние штор, где 0-задвинуты, 1-раздвинуты"<<endl;
	cin>>b;
	cout<<"Введите состояние лампы, где 0-выключена, 1-включена"<<endl;
	cin>>c;
	if (((a==1)&&(b==1))||(c==1))
	{
		cout<<"В комнате светло! Хорошая погодка!";
	}
	else
	{
		cout<<"В комнате темно! Пора баиньки!";
	}
	return 0;
}
