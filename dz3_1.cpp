#include <iostream>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	double S,p,n,m,r;
	std::cout<<"������� �������� S - ���� � ������"<<std::endl;
	std::cin>>S;
	std::cout<<"������� ������� p"<<std::endl;
	std::cin>>p;
	std::cout<<"������� ���������� ��� n"<<std::endl;
	std::cin>>n;
	r=p/100;
	m=(S*r*pow(1+r,n))/(12*(pow(1+r,n)-1));
	std::cout<<"����� = "<<m;
	return 0;
}
