#include <bits/stdc++.h>
using namespace std;
 
long long countFlagstones (int n, int m, int a) {
    long long ans = 0;
    
    if (n%a!=0) {
        n = n + (a-(n%a));
    }
    
    if (m%a!=0) {
        m = m + (a-(m%a));
    }
    
    ans = (1LL * n * m) / (1LL * a * a);    
    return ans;
}
 
int main() {
    int n, m, a;
    
    cin >> n >> m >> a;
    
    cout << countFlagstones (n, m, a);
}