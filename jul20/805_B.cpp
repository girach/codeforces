#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	char s[n];

	if (n==1) {
		cout << "a" << endl;
	}
	else if (n==2) {
		cout << "aa" << endl;
	}
	else {
		s[0] = 'a';
		s[1] = 'a';
		for (int i=2;i<n;i++) {
			if (s[i-2]=='a') s[i] = 'b';
			else s[i] = 'a';
		}

		for (int i=0;i<n;i++) cout << s[i];
	}

}