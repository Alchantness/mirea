#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double V,S,h,R,r,l;
	cout<<"������� ������"<<endl;
	cin>>h;
	cout<<"������� ������ ������� ���������"<<endl;
	cin>>R;
	cout<<"������� ������ �������� ���������"<<endl;
	cin>>r;
	cout<<"������� ����� ����������"<<endl;
	cin>>l;
	V=(M_PI*h*(pow(R,2)+R*r+pow(r,2)))/3;
	S=M_PI*(pow(R,2)+(R+r)*l+pow(r,2));
	cout<<"����� �����= "<<V<<endl;
	cout<<"������� �����= "<<S<<endl;
	return 0;
}
