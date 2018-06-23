#include<iostream>
using namespace std;

int main() {

	int n;
	cin >>n;
	char a[n][n];
	int temp = ((n*n)%2==0)?(n*n)/2:(n*n)/2+1;
	cout << temp << endl;
	for(int i=0;i<n;i++) {
		a[0][i] = (i%2)==0?'C':'.';
	} 

	for (int j=1;j<n;j++) {
		for (int i=0;i<n;i++) {
			if (a[j-1][i]=='.') a[j][i]='C';
			else a[j][i]='.';
		}
	}

	for (int j=0;j<n;j++) {
		for (int i=0;i<n;i++) {
			cout << a[j][i];
		}
		cout << endl;
	}

	return 0;
}