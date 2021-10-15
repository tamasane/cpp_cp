#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-->0) {
        int n, x, y;
        cin >> n >> x >> y;
        cout << (y < (float)x/(n+1) ? "NO" : "YES") << endl;
    }
    return 0;
}