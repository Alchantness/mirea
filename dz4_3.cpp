#include <iostream>
#include <cmath>
using namespace std;
 
void pr(){
    int a, b;
    cout << "A and B: ";
    cin >> a >> b;
    cout << a*b;
}
 
void ci(){
    int r;
    cout << "R: ";
    cin >> r;
    cout << r*r*M_PI;
}
void tr(){
    int a, h;
    cout << "A and H: ";
    cin >> a >> h;
    cout << a*h/2;
}
 
int main() {
    cout << "Rectangle - 1\nTriangle - 2\nCircle - 3\n";
    int x;
    cin >> x;
    switch(x){
        case 1:
            pr();
            break;
        case 2:
            tr();
            break;
        case 3:
            ci();
            break;
    }
    return 0;
}
