#include <iostream>
#include <math.h>
 
int main()
{
	setlocale(LC_ALL, "Russian");
	double S,p,n,m,r,b,m0;
	std::cout<<"¬ведите значение S - займ в рубл€х"<<std::endl;
	std::cin>>S;
	std::cout<<"¬ведите m"<<std::endl;
	std::cin>>p;
	std::cout<<"¬ведите количиство лет n"<<std::endl;
	std::cin>>n;
	r=p/100;
	b=1;
	m=(S*r*pow(1+r,n))/(12*(pow(1+r,n)-1));
	for (p=0; p<100; p++)
	{
		m0=(S*r*pow(1+r,n))/(12*(pow(1+r,n)-1));
		if (m<=m0)
		{
			p=b+0.001;
		}
	}
	std::cout<<p;
	return 0;
}
