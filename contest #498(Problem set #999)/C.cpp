#include<iostream>
using namespace std;

int main() {

	int n,k;
	cin >> n >> k;

	// cout << n << k << endl;
	string s;
	cin >> s;
	int length = s.length();
	int arr[length] = { 0 };
	int ptr[length] = { 0 };
	int temp = 0;
	// cout << s << endl;

	for (int i=0;i<26;i++) {
		// cout << (char)(i+97) << endl;
		for (int j=0;j<length;j++) {
			if (s[j]==(char)(i+97)) {
				arr[temp] = j;
				temp++;
			}
		}
	}
	
	// for (int i=0;i<length;i++) cout << arr[i] << " ";
	// cout << endl;
	// for (int k = 0;k<n;k++) {
	for (int i=0;i<k;i++) {
		ptr[arr[i]] = 1;
	}

	// for (int i=0;i<length;i++) cout << ptr[i] << " ";
	// cout << endl;
	
	for (int i=0;i<n;i++) {
		if (ptr[i]==0) cout << s[i];
	}
	cout << endl;
// }
	return 0;
}