#include <iostream>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	double S,p,n,m,r;
	std::cout<<"Введите значение S - займ в рублях"<<std::endl;
	std::cin>>S;
	std::cout<<"Введите процент p"<<std::endl;
	std::cin>>p;
	std::cout<<"Введите количиство лет n"<<std::endl;
	std::cin>>n;
	r=p/100;
	m=(S*r*pow(1+r,n))/(12*(pow(1+r,n)-1));
	std::cout<<"Ответ = "<<m;
	return 0;
}
