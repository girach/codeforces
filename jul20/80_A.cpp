#include<iostream>
using namespace std;

int main () {

	int n,m;
	cin >> n >> m;
	int a[m+1] = {0};
	for (int j=0;j<=m;j++) a[j] = 1;
	a[0] = a[1] = 0;
	for (int i=2;i<=m;i++) {
		if (a[i]==1) {
			for (int j=2;i*j<=m;j++) a[i*j] = 0;
		}
	}

	// for (int j=0;j<=m;j++) cout << a[j] << " ";

	for (int i=n+1;i<m;i++) {
		if (a[i]==1) {
			cout << "NO" << endl;
			return 0;
		}
	}
	if (a[m]==1) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}