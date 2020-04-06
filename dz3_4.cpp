#include <iostream>
#include <set>
using namespace std;
 
int main() {
    set<char> str;
    int n = 30;
 
    char temp;
    while (n--) {
        cin >> temp;
        str.insert(temp);
    }
 
    for (auto &c : str) cout << c;
    cout << endl;
 
    return 0;
}
