#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-->0) {
        int n, m, k, sum=0;
        cin >> n >> m >> k;
        int arr[n];
        for (int i=0; i<n; i++) cin >> arr[i];
        for (int i=0; i<n && arr[i]==1; i++) sum += arr[i];
        if (sum == n) cout << 100;
        else if (sum >= m) cout << k;
        else cout << 0;
        cout << endl;
    }
    return 0;
}