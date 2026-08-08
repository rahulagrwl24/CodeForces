#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        vector<int> v;
 
        for (int i = 0; i < n; i++) {
            if (find(v.begin(), v.end(), a[i]) == v.end()) { // if(true) --> the element is not present
                v.push_back(a[i]);
            }
        }
 
        if (v.size() == 1) cout << "YES" << endl;
 
        else if (v.size() == 2) {
            int count1 = 0, count2 = 0;
            int k = a[0];
 
            for (int i = 0; i < n; i++) {
                if (a[i] == k) count1++;
                else count2++;
            }
 
            if (count1 == count2 || abs(count1 - count2) == 1)
            cout << "YES" << endl;
 
            else cout << "NO" << endl;
        }
 
        else
        cout << "NO" << endl;
 
    }
}