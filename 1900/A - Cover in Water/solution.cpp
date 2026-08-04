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
 
        int foundThreeDots = 0, numberOfDots = 0;
        bool found = false;
 
        for (int i = 0; i < n - 2; i++) {
            if (s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
                foundThreeDots = 2;
                found = true;
            }
        }
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                numberOfDots++;
            }
        }
 
        if (found) {
            cout << foundThreeDots << endl;
        }
        else {
            cout << numberOfDots << endl;
        }
    }
}