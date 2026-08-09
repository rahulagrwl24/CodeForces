#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n, m;
        cin >> n >> m;
 
        string x, s;
        cin >> x >> s;
 
        int count = 0;
 
        while (x.length() < s.length()) { // the loop will run till the size of x gets >= size of s
            x = x + x;
            count++;
        }
 
        if (x.find(s) != string::npos) { // if substring exists
            cout << count << endl;
        }
 
        else {
            x = x + x;
 
            if (x.find(s) != string::npos)
            cout << count + 1 << endl;
 
            else
            cout << -1 << endl;
        }
    }
}