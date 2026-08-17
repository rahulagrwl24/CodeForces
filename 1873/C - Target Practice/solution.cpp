#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        char c;
 
        int sum = 0;
        int mn;
 
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                cin >> c;
 
                if (c == 'X') {
                    sum = sum + min({i, j, 11-i, 11-j});
                }
            }
        }
 
        cout << sum << endl;
    }
}