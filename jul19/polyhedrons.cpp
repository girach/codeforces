#include<iostream>
using namespace std;

int main() {

	long int n, answer = 0;
	cin >> n;
	string s;
	for (int i=0;i<n;i++) {
		cin >> s;
		if (s[0]=='I') answer+=20;
		else if (s[0]=='C') answer+=6;
		else if (s[0]=='T') answer+=4;
		else if (s[0]=='O') answer+=8;
		else if (s[0]=='D') answer+=12;
	}

	cout << answer;


	return 0;
}