#include<iostream>
using namespace std;

int main() {

	string t,s;
	cin >> t;
	s = "QAQ";
	int m = t.length(), n = 3;
	int look_up[m+1][n+1] = { {0} };
	for (int i=0;i<=n;i++) look_up[0][i] = 0;
	for (int i=0; i<=m;i++) look_up[i][0] = 1;	
	// for (int i=0;i<=m;i++) {
	// 	for(int j=0;j<=n;j++) {
	// 		cout << look_up[i][j] << " ";
	// 	}
	// 	cout << endl;

	// }

	for (int i=1;i<=m;i++) {
		for (int j=1;j<=n;j++) {
			if (t[i-1]==s[j-1]) look_up[i][j] = look_up[i-1][j-1]+look_up[i-1][j];
			else look_up[i][j] = look_up[i-1][j];
			// cout << look_up[i][j] << " ";
		}
		// cout << endl;
	}
	// cout << "After filling" << endl;
	// for (int i=0;i<=m;i++) {
	// 	for(int j=0;j<=n;j++) {
	// 		cout << look_up[i][j] << " ";
	// 	}
	// 	cout << endl;

	// }
	cout << look_up[m][n] << endl;
	return 0;
}