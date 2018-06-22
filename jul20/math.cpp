#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	if (n%2==1) {
		cout << 0 << endl;
	}
	else {
		n/=2;
		n-=1;
		n/=2;
		cout << n << endl;
	}

	return 0;
}