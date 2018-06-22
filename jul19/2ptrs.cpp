#include<iostream>
using namespace std;

int main() {

	int n,ptr1,ptr2,mover = 0;
	cin >> n;
	int cards[n];
	int score[2] = {0};

	for (int i=0;i<n;i++) cin >> cards[i];
	// for (int i=0;i<n;i++) cout << cards[i] << " ";
	// cout << endl;	
	ptr1 = 0;
	ptr2 = n-1;

	while (ptr1<=ptr2) {

		if (cards[ptr1]>cards[ptr2]) {
			score[mover]+=cards[ptr1];
			ptr1++;
			mover = (mover+1)%2;
			// for (int i=0;i<2;i++) cout << score[i] << " ";
			// cout << endl;
		}
		else {
			score[mover]+=cards[ptr2];
			ptr2--;
			mover = (mover+1)%2;
			// for (int i=0;i<2;i++) cout << score[i] << " ";
			// cout << endl;
		}

	}

	cout << score[0] << " " << score[1] << endl;
	return 0;
}