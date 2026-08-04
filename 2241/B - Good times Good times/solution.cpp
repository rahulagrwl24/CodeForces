#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
 
        int temp = x;
        int countDigits = 0;
 
        while (temp != 0) {
            temp = temp / 10;
            countDigits++;
        }
 
        cout << "1";
 
        if (countDigits > 1) {
            for (int i = 1; i < countDigits; i++) {
                cout << "0";
            }
        }
 
        cout << "1" << endl;
    }
    return 0;
}