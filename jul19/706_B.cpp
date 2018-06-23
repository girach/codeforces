#include<iostream>
using namespace std;


int partition(int *a, int low, int high) {

	int pivot = a[high];
	int i = low-1;
	int temp;
	for (int j= low;j<high;j++) {

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
void sort(int *a,int low,int high) {

	if(low<high) {

		int p = partition(a, low, high);
		sort(a,low,p-1);
		sort(a,p+1,high);
	}

}

int bin_search(int *a, int n, int money) {

	int left = 0,right = n;
	int mid;
	while(left<right) {

		mid = left+(right-left)/2;
		// cout << mid << endl;
		if (a[mid]==money) {
			if (a[n-1]==money) return n;
			else{
				while(a[mid+1]==money && mid+1 < n) mid++;
				break;
			}
		}
		else if (a[mid]<money) left = mid + 1;
		else right = mid;
	}

	while(a[mid]>money && mid>=0) mid--;

	return mid+1;

}
int main() {

	int n,q;
	int prev_answer;
	long int money,prev;
	bool equal = true;
	int order = -1;
	cin >> n;
	int a[n];

	for (int i=0;i<n;i++) cin >> a[i];

	for (int i=0;i<n-1;i++) {
		if (a[i]<a[i+1]) { 
			order = 2;
			break;
		}
	}
	if (order==-1) {
		int temp[n];
		for (int i=0;i<n;i++) temp[i] = a[n-i-1];
		for (int i=0;i<n;i++) a[i] = temp[i];
	}
	else  {
		for (int i=0;i<n-1;i++) {
			if (a[i]>a[i+1]) {
				sort(a,0,n-1);
				break;
			}
		}
	}

	for (int i=0;i<n-1;i++) {
		if (a[i]!=a[i+1]) {
			equal = false;
			break;
		}
	}


	// for (int i=0;i<n;i++) cout << a[i] << " ";
	// cout << endl;

	cin >> q;
	prev = -1;
	for (int i=0;i<q;i++) {
		cin >> money;
		if (equal) {
			if (money >= a[0]) cout << n << endl;
			else cout << 0 << endl;
		}
		else {
			if (prev == money) { 
				cout << prev_answer << endl;
			}
			else {
				prev_answer = bin_search(a, n, money);
				cout << prev_answer << endl;
			}
			prev = money;
		}
	}

	return 0;
}