#include<iostream>
using namespace std;

int main() {

	int n,temp,_25 = 0,_50 = 0;
	bool flag = false;
	cin >> n;
	int bill[n];
	for (int i=0;i<n;i++) cin >> bill[i];

	for (int i=0;i<n;i++) {

		temp = bill[i];
		if (temp==25) _25++;
		else if (temp==50) {

			if (_25>0) {_25--;_50++;}
			else {
				cout << "NO" <<endl;
				flag = true;
				break;
			}
		}
		else {
			if (_50>0 && _25>0) {
				_50--;
				_25--;
			} 
			else if (_50==0 && _25>=3) _25-=3;
			else {
				cout << "NO" << endl;
				flag = true;
				break;
			}


		}



	

	}

	if(!flag) cout << "YES" << endl;

	return 0;
}