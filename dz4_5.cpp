#include <iostream>
#include <math.h>
using namespace std;

#define PI_48 0.065449847

int main() {
    char x[20][300];
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 300; j++) {
            x[i][j]=' ';
            if (10 - i == (int)(10.0 * sin((float)j * PI_48)))
                x[i][j]='*';
            cout << x[i][j];
        }
        cout << endl;
    }
    return 0;

}
