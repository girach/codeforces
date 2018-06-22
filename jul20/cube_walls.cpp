#include<iostream>
using namespace std;

int main() {

	int n,w, offset,count=0;
	bool flag = true;
	cin >> n >> w;
	if(n<w) {
		cout << count;
		return 0;
	}

	int horace[w];
	int temp[w];
	int bear[n];
	for (int i=0;i<n;i++) cin >> bear[i];
	// for (int i=0;i<n;i++) cout << bear[i] << " ";
	// cout << endl;
	for (int i=0;i<w;i++) cin >> horace[i];
	// for (int i=0;i<w;i++) cout << horace[i] << " ";
	// cout << endl;

	for (int i=0;i<=n-w;i++) {
		flag = true;
		offset = bear[i]-horace[0];
		for (int j=0;j<w;j++) { 
			temp[j] = bear[i+j]-offset;
			// cout << temp[j] << " ";
		}
		// cout << endl;
		for (int j=0;j<w;j++) {
			if(temp[j]!=horace[j]) {
				flag = false;
				break;
			}
		}
		// cout <<flag << endl;
		if (flag) count++;
	}

	cout << count << endl;

	return 0;
}