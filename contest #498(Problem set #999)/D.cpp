#include<iostream>
using namespace std;


int partition(int *a, int low, int high) {
	int pivot = a[high];
	int i = low-1;
	int temp;
	for (int j=low;j<high;j++) {
		if (pivot>=a[j]) {
			++i;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	++i;
	a[high] = a[i];
	a[i] = pivot;
	return i;
}

void sort(int *a, int low, int high) {

	if (low<high) {
		int p = partition(a, low, high);
		sort(a,low,p-1);
		sort(a,p+1,high);
	}
}
int main() {

	int n,m,temp;
	cin >> n >> m;
	int a[m] = {0};
	int ans[m] = {0};
	for (int i=0;i<n;i++) {
		cin >> temp; 
		a[temp%m]++;
		cout << temp << " ";
	}
	cout << endl;
	// cout << (-1%3) <<  endl;
	for (int i=0;i<m;i++) cout << a[i] << " ";
	cout << endl;
	
	// sort(a,0,m-1);

	// for (int i=0;i<m;i++) cout << a[i] << " ";
	// cout << endl;

	for (int i=0;i<m;i++) {
		for (int j=0;j<m;j++) {
			if (i>=j) ans[i]+=a[j]*(i-j);
			else {
				ans[i]+=a[j]*((m+(i-j)%m)%m);
			}
			cout << ans[i] << " ";
		}
		cout << endl;
		cout << endl;

	}
	int min = ans[0];
	for (int i=1;i<m;i++) min = (min>ans[i])?ans[i]:min;
	cout << min << endl;
	// for (int i=0;i<m;i++) cout << ans[i] << " ";
	return 0;
}