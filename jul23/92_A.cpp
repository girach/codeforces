#include<iostream>
using namespace std;

int main() {
    
    int n,m,j;
    cin >> n >> m;
    
    int a[n]={1};
    for (int i=1;i<n;i++) a[i] = a[i-1]+(i+1);
    // for (int i=0;i<n;i++) cout << a[i] << " ";
    // cout << endl;
    m %=a[n-1];
    if (m==0) cout << 0 << endl;
    else {
        for (int i=n-1;i>=0;i--) {
            // cout << m << " " << a[i] << endl;
            if (m>=a[i]) {
                cout << (m-a[i]) << endl;
                return 0;
            }
        }
    }
    
    return 0;
}