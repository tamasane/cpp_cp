#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    int arr[32];
    arr[0]=1;
    for (int i=1; i<32; i++) arr[i] = arr[i-1] << 1;
    while (t-->0) {
        int x;
        cin >> x;
        for (int i=0; i<32; i++) {
            if (x+1 == arr[i]) {
                cout << arr[i];
                break;
            }
            else if (x < arr[i]) {
                cout << arr[i-1];
                break;
            }
        }
        cout << endl;
    }
    return 0;
}