#include<iostream>
using namespace std;

int main() {

	long long int n,k;
	cin >> n >> k;

	((n/k)%2==1)? cout << "YES" : cout << "NO";


	return 0;
}