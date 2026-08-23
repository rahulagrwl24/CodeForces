#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
 
        if (a != b) {
            if (a > b) cout << "First" << endl;
            else cout << "Second" << endl;
        }
 
        else {
            if ((a + b + c) % 2 != 0) cout << "First" << endl;
            else cout << "Second" << endl;
        }
    }
}