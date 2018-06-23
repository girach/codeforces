#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	string s;
	char temp[n];
	cin >> s;
	for (int i=2;i<=n;i++) {
		if (n%i==0) {
			for (int j=0;j<i;j++) temp[j] = s[i-j-1];
			for (int j=0;j<i;j++) s[j] = temp[j];
		}
	}
	cout << s;
	return 0;
}