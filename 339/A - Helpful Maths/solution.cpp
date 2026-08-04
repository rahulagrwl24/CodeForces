#include <bits/stdc++.h>
using namespace std;
 
void HelpfulMaths (string s) {
    int len = s.length();
    
    int c1 = 0, c2 = 0, c3 = 0;
    
    for (int i=0; i<len; i++) {
        if (s[i] == '1') c1++;
        else if (s[i] == '2') c2++;
        else if (s[i] == '3') c3++;
    }
    
    bool plus = true;
    
    for (int i=1; i<=c1; i++) {
        if (!plus) cout << "+";     // if statement will run if the logic is true
        cout << "1";                // so first time there will be no '+'
        plus = false;               // if there are more counts, !plus = true, '+' will be added beforehand
        
    }
    
    for (int i=1; i<=c2; i++) {
        if (!plus) cout << "+";
        cout << "2";
        plus = false; 
    }
    
    for (int i=1; i<=c3; i++) {
        if (!plus) cout << "+";
        cout << "3";
        plus = false; 
    }
}
 
int main() {
    string s;
    
    cin >> s;
    
    HelpfulMaths(s);
}