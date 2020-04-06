#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double b,c,a;
	cout<<"Vvedite b, c, a"<<endl;
	cout<<"b= ";
	cin>>b;
	cout<<"c= ";
	cin>>c;
	cout<<"a= ";
	cin>>a;
	double x;
	if((b*b - 4*a*c) >= 0) 
	{
		x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "1 koren= " << x << endl;
        x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "2 koren= " << x << endl;
	}
	else
	{
		cout << "D<0, ne sush resh" << endl;
	}
	return 0;
}
