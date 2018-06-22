#include<iostream>
using namespace std;

int partition(int *f, int low, int high) {

	int pivot = f[high];
	int temp;
	int i = low-1;

	for (int j=low;j<high;j++) {

		if (f[j]<=pivot) {

			++i;
			temp = f[i];
			f[i]=f[j];
			f[j]=temp;
		}
	}
	++i;
	f[high] = f[i];
	f[i]=pivot;
	return i;
}
int sort(int *f,int low, int high) {

	if(low<high) {

		int p = partition(f,low,high);
		sort(f,low,p-1);
		sort(f,p+1,high);
	}
	return 0;
}
int main() {

	int stud, piece,decoy;
	cin >> stud >> piece;
	int f[piece];
	for (int i=0;i<piece;i++) {

		cin >> f[i];
	}
	sort(f,0,piece-1);
	// for (int i=0;i<piece;i++) {

	// 	cout << f[i]<< " ";
	// }
	// cout << endl;
	int min = 1000;
	for (int i=0;i<piece-stud+1;i++) {

		decoy = f[i+stud-1]-f[i];
		// cout << decoy << endl;
		if (decoy<min) min = decoy;
	}
	cout << min;
	return 0;
}