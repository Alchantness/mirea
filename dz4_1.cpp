#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int i, s, sum = 0;
    setlocale(0, "");
    string line;
    ofstream d("file.txt");
    for (i = 0; i < 10; i++){
        cin >> s;
        d << s << "\n";
    }
    d.close();
    
    ifstream k("file.txt");
    if(k.is_open()){
        while (getline(k, line)){
            sum = sum + stoi(line);
        }
    }
    
    k.close();
    cout << sum;
    return 0;
}
