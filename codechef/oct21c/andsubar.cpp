#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int arr[32];
    arr[0] = 1;
    for (int i=1; i<32; i++) arr[i] = arr[i-1] * 2;
    while (t-->0) {
        int n;
        cin >> n;
        for (int i=0; i<32; i++) {
            if (n < arr[i]) {
                int a = n - arr[i-1] + 1;
                int b = i > 2 ? arr[i-1] - arr[i-2] : 0;
                cout << (a > b ? a : b) << endl;
                break;
            }
        }
    }
    return 0;
}