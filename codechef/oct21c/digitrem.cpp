#include <iostream>
using namespace std;

int digitrem(int n, int d) {
    int div=1;
    while (n / div > 0) div *= 10;
    div /= 10;
    while (div != 0 && (n/div)%10 != d) div /= 10;
    if (div == 0) return n;
    if (d != 0 && d != 9) return (n/div + 1) * div;
    else if (d == 0) {
        int ret = (n/div+1)*div;
        while ((div/=10) > 0) ret += div;
        return ret;
    }
    else {
        int ret=(n/div+1)*div;
        return digitrem(ret, d);
    }
}

int main() {
    int t;
    cin >> t;
    while (t-->0) {
        int n, d;
        cin >> n >> d;
        cout << (digitrem(n, d)-n) << endl;
    }
    return 0;
}

