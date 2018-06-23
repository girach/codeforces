// C++ program to count the ways
// to break the array in 3 equal parts
// having equal sum.
#include <bits/stdc++.h>
using namespace std;

// Function to count the no of ways
long long int countways(int a[], int n)
{
	long long int cnt[n] = {0}, s = 0;
	
	// Calculating the sum of the array
	// and storing it in variable s
	for (long long int i = 0 ; i < n ; i++)
	{
		s += a[i];
	}

	// Checking s is divisible by 3 or not
	if (s % 3 != 0) {
		// cout << "Culprit" << endl;
		return 0;
	}
	
	// Calculating the sum of each part
	s /= 3;
	
	long long int ss = 0;
	
	// If the sum of elements from i-th to n-th
	// equals to sum of part putting 1 in cnt 
	// array otherwise 0. 
	for (long long int i = n-1; i >= 0 ; i--)
	{
		ss += a[i];
		if (ss == s)
			cnt[i] = 1;
		// cout << cnt[i];	
	}
	// cout << endl;
	// Calculating the cumulative sum
	// of the array cnt from the last index.
	for (long long int i = n-2 ; i >= 0 ; i--) {
		cnt[i] += cnt[i + 1];
	    // cout << cnt[i];
	}
	// cout << endl;
	long long int ans = 0;
	ss = 0;
	
	// Calculating answer using original
	// and cnt array.
	for (long long int i = 0 ; i+2 < n ; i++)
	{
		ss += a[i];
		if (ss == s)
			ans += cnt[i + 2];
	}
	return ans;
}

// Driver function
int main()
{
	long long int n;
	cin >> n;
	int a[n];	
	for (long long int i=0;i<n; i++) cin >> a[i];
	cout << countways(a, n) << endl;
	return 0;
}
