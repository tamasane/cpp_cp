#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;
    int a=0, b=0, n=input.length();
    for (int i=0; i<(n+1)/2; i++){
        if (input[2*i]=='A') a += input[2*i+1] - '0';
        else b += input[2*i+1] - '0';
        if (a==11 && b<10) { cout << "A" << endl; break; }
        else if (b==11 && a<10) { cout << "B" << endl; break; }
        else if (a>11 && a-b>1) { cout << "A" << endl; break; }
        else if (b>11 && b-a>1) { cout << "B" << endl; break; }
    }
    return 0;
}