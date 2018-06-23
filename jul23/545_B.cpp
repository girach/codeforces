#include <iostream>

using namespace std;

int main()
{
    string s,t;
    int incr=0;
    cin >> s;
    cin >> t;
    char p[s.length()];
    char c = '0';
    for (int i=0;i<s.length();i++) {
        if (s[i]!=t[i]) {
            incr++;
            if (c=='0') p[i] = t[i];
            else p[i] = s[i];
            c = (c=='0')?'1':'0';
        }
        else p[i] = '0';
    }
    if (incr%2==1) cout << "impossible" << endl;
    else {
        for (int i=0;i<s.length();i++) cout << p[i];
        cout << endl;
    }
   return 0;
}