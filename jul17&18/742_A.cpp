#include <iostream>
using namespace std;

int pow(int a, int b) {

	int res = 1;
	for (int i=0;i<b;i++) res*=a;
	return res;
}
int main() {

	int n;
	cin >> n;
	if (n==0) {
		cout << 1;
		return 0;
	}
	if (n%4==0) {
		n=4;
		cout << pow(8,4)%10;
	}
	else {
		n = (n%4);
		cout << pow(8,n)%10;
		return 0;
	}
}