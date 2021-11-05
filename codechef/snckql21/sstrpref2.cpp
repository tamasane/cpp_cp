#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int* z(string s);
int buildST(int arr[], int* st, int l, int r, int x);
int getSum(int* st, int s, int e, int l, int r, int x);

int main() {
    int t;
    cin >> t;
    while (t-->0) {
        string s1, s2, x;
        cin >> s1 >> s2 >> x;
        int n1 = s1.length(), n2 = s2.length(), n = x.length();
        int* Z1 = z(s1+'#'+x+'$');
        int* Z2 = z(s2+'#'+x+'$');
        
        int f1[n], f2[n];

        for (int i=0; i<n; i++) {
            f1[i] = Z1[i+n1+1]+i;
            f2[i] = Z2[i+n2+1]+i;
        }
        
        int x_ = (int)ceil(log2(n));
        int max_size = (int)(2*pow(2, x_)) - 1;
        int* st = new int[max_size];

        buildST(f2, st, 0, n-1, 0);

        long ans = 0;
        for (int i=0; i<n; i++) {
            long best = getSum(st, 0, n-1, i, f1[i], 0);
            ans += best - (f1[i]-i) * i;
        }
        cout << ans << endl;
    }
    return 0;
}

int* z(string s) {
    int n = s.length();
    int* Z = new int[n];
    for (int i=1,l=0, r=0; i<n; i++) {
        if (i<=r) Z[i]= min(r-i+1, Z[i-l]);
        while (i+Z[i]<n && s[Z[i]]==s[i+Z[i]]) ++Z[i];
        if (i+Z[i]-1>r) {
            l=i;
            r=i+Z[i]-1;
        }
    }
    return Z;
}

int buildST(int arr[], int* st, int l, int r, int x) {
    if (l==r) {
        st[x]=arr[l];
        return st[x];
    }
    int mid = l + (r-l) / 2;
    st[x] = buildST(arr, st, l, mid, 2*x+1) +
            buildST(arr, st, mid+1, r, 2*x+2);
    return st[x];
}

int getSum(int* st, int s, int e, int l, int r, int x) {
    if (s>=l && e<=r) return st[x];
    if (e<l || r<s) return -1;
    int mid = s + (e-s) / 2;
    return  getSum(st, s, mid, l, r, 2*x+1) +  
            getSum(st, mid+1, e, l, r, 2*x+2);
}