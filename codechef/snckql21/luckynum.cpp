#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-->0) {
        int a,b,c;
        cin >> a >> b >> c;
        if (a==7 || b==7 || c==7) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}