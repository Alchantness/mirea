#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	string a;
	int n;
	fstream F;
	F.open("C:\\Users\\Try3\\Desktop\\прога.txt");
	char nums[10] = {'0','1','2','3','4','5','6','7','8','9'};
	if (F)
	{
		while (!F.eof())
		{ 
			F>>a;
			n = a.length();
			for( int i = 0; i < n; i++ )
			{
				for( int j = 0; j < 10; j++ ) 
				{
					if( a[i] == nums[j] ) 
					{
						cout << a[i];
					}
				} 
			}

		}
		F.close();
	}
	else cout<<" Файл не существует "<<endl;
    system("pause");
    return 0;	
}
