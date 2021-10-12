#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t-->0) {
        int a, b;
        cin >> a >> b;
        if (a > 0 && b > 0) cout << "Solution";
        else if (b == 0) cout << "Solid";
        else if (a == 0) cout << "Liquid";
        cout << endl;
    }
    return 0;
}