#include<iostream>
using namespace std;

int partition(int *a, int low, int high) {
    
    int pivot = a[high];
    int i = low-1;
    int temp;
    for (int j=low;j<high;j++) {
        if (pivot<=a[j]) {
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
        int p = partition(a,low,high);
        sort(a,low,p-1);
        sort(a,p+1,high);
    }
}
int main() {
    
    int n,m,cnt=0;
    cin >> n >> m;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    
    sort(a,0,n-1);
    // for (int i=0;i<n;i++) cout << a[i] << " ";
    // cout << endl;
    
    for (int i=0;i<n;i++) {
        // cout << m << endl;
        if (m>0) {
            m-=a[i];
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}