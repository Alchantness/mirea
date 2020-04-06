
#include <iostream>
#include <set>
using namespace std;
 
int main() {
   char s[]="fgahkeyvna";
 
  for(int i = 0; i < strlen(s) - 1; i++)
    for(int j = strlen(s)-1; j >i ; j--)
        if (s[j] < s[j-1])
           swap(s[j],s[j-1]);
  cout<<s;
  return 0;
}
