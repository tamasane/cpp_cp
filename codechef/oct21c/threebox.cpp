#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-->0) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a+b+c <= d) cout << 1;
        else if ((a+b)<= d || (b+c) <= d || (a+c)<=d) cout << 2;
        else cout << 3;
        cout << endl;
    }
    return 0;
}