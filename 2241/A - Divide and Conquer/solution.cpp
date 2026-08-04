#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        float x, y;
        cin >> x >> y;
 
        float z = x / y;
 
        if ((int)z - z == 0)
        cout << "YES" << endl;
 
        else
        cout << "NO" << endl;
    }
    return 0;
}