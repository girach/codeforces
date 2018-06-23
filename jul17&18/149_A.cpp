#include<iostream>
using namespace std;


int partition(int *a, int low, int high) {

	int pivot = a[high];
	int i=low-1;
	for(int j=low;j<high;j++) {

		if (a[j]>=pivot) {
			++i;
			int temp = a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	++i;
	a[high] = a[i];
	a[i] = pivot;
	return i;
}
int sort(int *a, int low, int high) {

	if(low<high) {

		int p = partition(a,low,high);
		sort(a,low,p-1);
		sort(a,p+1,high);
	}
	return 0;
}
int main() {

	int k,count,i;
	count = 0;
	cin >> k;
	int a[12];
	for (int i=0;i<12;i++) cin >> a[i];
	// for (int i=0;i<12;i++) cout << a[i] << " ";
	// cout << endl;
	sort (a,0,11);
	// for (int i=0;i<12;i++) cout << a[i] << " ";
	i = 0;
	while(k>0 && i<12) {

		count++;
		// cout << k << endl;
		k = k - a[i];

		i++;
		

	}
	if (k!=0 && i==12) {cout << -1;}
	else cout << count;
	return 0;
}