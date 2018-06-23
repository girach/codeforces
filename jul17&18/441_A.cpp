#include<iostream>
using namespace std;

int main() {

	int n,v,num,count,val;
	bool flag;
	count = 0;
	cin >> n >> v;
	int deal[n] = {0};
	// cout << n << v << endl;
	for (int i=0;i<n;i++) {
		flag = false;
		cin >> num;
		for (int j=0;j<num;j++) {

			cin >> val;
			// cout << val << endl;
			if (val<v) {
				// cout << val << endl;
				flag = true;
			}
		}
		if (flag) {
			deal[count] = i+1;
			count++;
		}
	}

	cout << count << endl;
	for (int i=0;i<count;i++) {
		cout << deal[i]<< " ";
	}

	return 0;
}