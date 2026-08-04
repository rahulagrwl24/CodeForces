#include <bits/stdc++.h>
using namespace std;
 
int countSolvableProblems(int n) {
    int a, b, c;
    int ans = 0;
    for (int i=1; i<=n; i++) {
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        ans++;
    }
    return ans;
}
 
int main() {
    int n;
    cin >> n;
    cout << countSolvableProblems(n);
}