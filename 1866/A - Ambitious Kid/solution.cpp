#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main(){
    int n;
    cin >> n;
 
    int arr[n];
    int ans = LLONG_MAX;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
 
        ans = min(ans, abs(arr[i]));
    }
 
    cout << ans;
}