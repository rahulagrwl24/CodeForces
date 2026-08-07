#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        char a, b;
 
        int count = 0;
 
        for (int i = 0; i < n; i++) {
            a = s[i];
            b = s[i+1];
 
            if (abs(a-b) == 1)
            count++;
        }
 
        if (count == 0 || count > 1)
        cout << "1" << endl;
        else
        cout << "2" << endl;
    }
}