#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double V,S,h,R,r,l;
	cout<<"¬ведете высоту"<<endl;
	cin>>h;
	cout<<"¬ведите радиус нижнего основани€"<<endl;
	cin>>R;
	cout<<"¬ведите радиус верхнего основани€"<<endl;
	cin>>r;
	cout<<"¬ведите длину образующей"<<endl;
	cin>>l;
	V=(M_PI*h*(pow(R,2)+R*r+pow(r,2)))/3;
	S=M_PI*(pow(R,2)+(R+r)*l+pow(r,2));
	cout<<"ќбъем равен= "<<V<<endl;
	cout<<"ѕлощадь равна= "<<S<<endl;
	return 0;
}
