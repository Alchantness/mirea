#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	setlocale(LC_ALL, "Russian");
	cout<<"������� ��������� �����, ��� 0-���������, 1-�������"<<endl;
	cin>>a;
	cout<<"������� ��������� ����, ��� 0-���������, 1-����������"<<endl;
	cin>>b;
	cout<<"������� ��������� �����, ��� 0-���������, 1-��������"<<endl;
	cin>>c;
	if (((a==1)&&(b==1))||(c==1))
	{
		cout<<"� ������� ������! ������� �������!";
	}
	else
	{
		cout<<"� ������� �����! ���� �������!";
	}
	return 0;
}
