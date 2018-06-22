#include <iostream>
using namespace std;

int main() {

	int n;
	bool flag;
	cin >> n;
	string s;
	string unique[n];
	int occurence[n] = {0};
	int tot = 0;
	for (int i=0;i<n;i++) {

		if (i==0) {
			cin >> s;
			unique[tot]=s;
			occurence[tot]++;
			tot++;
			cout << "OK" << endl;
		}
		else { 
			cin >> s;
			for (int j=0;j<tot;j++) {
				flag = false;
				if(s==unique[j]) {
					cout<< s << occurence[j] << endl;
					occurence[j]++;
					flag = true;
					break;
				}
			}
			if (!flag) {
				unique[tot] = s;
				occurence[tot]++;
				tot++;
				cout << "OK" << endl;
			}
		}

		}
		// cout << tot<< endl;
		// for (int i=0;i<tot;i++) cout << unique[i]<<endl;
			return 0;
	}