#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main(){
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        vector <int> a(n);
        vector <int> b, c;
 
        for (int i = 0; i < n; i++)
        cin >> a[i];
 
        int mn = *min_element(a.begin(), a.end());
 
        for (int i = 0; i < n; i++) {
            if (a[i] > mn)
            c.push_back(a[i]);
 
            else
            b.push_back(a[i]);
        }
 
        if (c.size() == 0)
        cout << -1 << endl;
 
        else {
            cout << b.size() << " " << c.size() << endl;
            for (int x : b) 
            cout << x << " ";
 
            cout << endl;
 
            for (int y : c)
            cout << y << " ";
 
            cout << endl;
        }
    }
}