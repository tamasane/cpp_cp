#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t-->0) {
        int a, b=0;
        for (int i=0; i<5; i++) {
            cin >> a;
            if (a==2) b-=1;
            else b+=a;
        }
        if (b==0) cout << "DRAW";
        else if (b>0) cout << "INDIA";
        else cout << "ENGLAND";
        cout << endl;
    }
    return 0;
}