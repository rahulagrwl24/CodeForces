#include <bits/stdc++.h>
using namespace std;
 
void bit (int n) {
    
    string x;
    int s=0;
    
    for (int i=1; i<=n; i++) {
        cin >> x;
        
        if (x[1] == '+')  ++s;
        
        else --s;
        
    }
    cout << s;
}
 
int main() {
    int n;
    cin >> n;
    
    bit(n);
}