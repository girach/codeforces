#include <iostream>
using namespace std;

int main() {

	int n,k,ans = 0;
	bool flag = true;
	cin >> n >> k;
	// cout << n << k << endl;
	int a[n];
	for (int i=0;i<n;i++) cin >> a[i];

	// int left = 0, right = n-1;
	for (int i=0;i<n;i++) {
		// cout << a[i] << k << ans <<endl;
		if (a[i]<=k) ans++;
		else {
			flag = false;
			break;
		}
	}
	// cout << ans << endl;
	if (!flag) {
		for (int i=n-1;i>=0;i--) {

			if (a[i]<=k) ans++;
			else break;
		}
	}

	cout << ans<< endl;

	return 0;
}