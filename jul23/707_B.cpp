#include<iostream>
using namespace std;

int main() {
    
    int n,m,k,temp,min;
    cin >> n >> m >> k;
    bool no[n];
    for (int i=0;i<n;i++) no[i] = true;
    int u[m];
    int v[m];
    int l[m];
    for (int i=0;i<m;i++) {
        cin >> u[i] >> v[i] >> l[i];
    }
    for (int i=0;i<k;i++) {
        cin >> temp;
        no[temp-1] = false;
    }
    min = 1000000001;
    for (int i=0;i<m;i++) {
        if (no[u[i]-1]^no[v[i]-1]) {;
            if (min>l[i]) min = l[i];
        }
    } 
    if (min==1000000001) cout << -1 << endl;
    else cout << min << endl;
    return 0;
}