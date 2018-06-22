#include<iostream>
using namespace std;

int main() {

	long long int left_sum,right_sum,total_sum,n,ptr1,ptr2,break_value,ways,left_trail,right_trail;
	bool flag = false;
	cin >> n;
	left_sum = right_sum = total_sum = ways = left_trail = right_trail =0;
	long long int val[n];
	for (int i=0;i<n;i++) {
		cin >> val[i];
		total_sum+=val[i];
	}
	if (n<3) {
		cout << 0;
		return 0;
	}

	break_value = total_sum/3;
	left_sum = val[0];
	right_sum = val[n-1];
	ptr1=1;
	ptr2=n-2;

	while(ptr1!=ptr2) {

		if (left_sum==break_value && right_sum!=break_value) {
			right_sum+=val[ptr2];
			ptr2--;
		}
		else if(left_sum!=break_value && right_sum==break_value) {
			left_sum+=val[ptr1];
			ptr1++;
		}
		else if (left_sum==break_value && right_sum==break_value) {
			flag = true;
			break;
		}
		else {
			left_sum+=val[ptr1];
			right_sum+=val[ptr2];

			ptr1++;
			ptr2--;

		}
	}
	if (flag) {
		left_trail = right_trail = 1;
		while(val[ptr1]==0 && ptr1<=ptr2) {
			left_trail++;
			ptr1++;
		}
	// cout << ptr1 << ptr2 << left_trail << endl;
		if (ptr1-1==ptr2) {
		// cout << "Here"<< endl;
			cout << (left_trail)*(left_trail-1)/2;
			return 0;
		}
		while(val[ptr2]==0 && ptr2>=ptr1) {
			right_trail++;
			ptr2--;
		}
	// cout << left_trail << endl;
	// cout << right_trail << endl;


		cout << (left_trail)*(right_trail);
	}
	else cout << 0;

	return 0;

}