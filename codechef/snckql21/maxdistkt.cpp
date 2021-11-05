#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-->0) {
        int n;
        cin >> n;
        int b[n], c[n];
        for (int i=0; i<n; i++) {
            cin >> b[i];
            c[i] = b[i]; 
        }
        sort(c, c+n);
        map<int, int> bToA;

        cout << endl;
    }
    return 0;
}