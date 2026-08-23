#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main(){
    int t;
    cin >> t;
    while(t--) {
        int a, n;
        cin >> n;
 
        int sum = 0;
 
        for (int i = 1; i <= n; i++) {
            cin >> a;
            sum += a;
        }
 
        if (sum % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}