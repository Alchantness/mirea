#include <iostream>

using namespace std;
    
string sign(int x){
    if(x < 0){
        return "-1";
    }
    else if(x == 0){
        return "0";
    } 
    else {
        return "1";
    }
}

int main() {

    setlocale(0, "");
    int x;
    cin >> x;
    cout << sign(x);
    
    return 0;
}
