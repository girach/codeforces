#include<iostream>
using namespace std;



int partition(int *a, int low, int high) {

	int pivot = a[high];
	int temp;
	int i = low-1;
	for(int j = low;j<high;j++) {
		if(pivot>=a[j]) {
			++i;
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}

	}
	++i;
	a[high] = a[i];
	a[i] = pivot;
	return i;



}
void sort(int *a, int low, int high) {

	if (low<high) {
		int p = partition(a,low,high);
		sort(a,low,p-1);
		sort(a,p+1,high);
	}


}
int main() {

	int n,offset = 1,count = 0;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++) cin >> a[i];
	sort(a,0,n-1);
	// for (int i=0;i<n;i++) cout << a[i] << " ";
	// cout << endl;
	for (int i=0;i<n;i++) {
		if (i+offset<a[i]) offset = a[i]-i;
		else 
			count +=((i+offset)-a[i]);
		// cout << offset << endl;
	}
	cout << count;
	return 0;
}