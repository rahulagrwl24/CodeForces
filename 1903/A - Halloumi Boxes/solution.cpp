#include<bits/stdc++.h>
using namespace std;
 
void HalloumiBoxes(int n, int k)
{
    int a;
    int prev = INT_MIN;
 
    bool sorted = true;
 
    for(int i = 0; i < n; i++)
    {
        cin >> a;
 
        if(a < prev)
            sorted = false;
 
        prev = a;
    }
 
    if(k > 1)
        cout << "YES
";
 
    else    // if (k == 1)
    {
        if(sorted)
            cout << "YES
";
        else
            cout << "NO
";
    }
}
 
int main() {
    int t, n, k;
 
    cin >> t;
 
    while(t--) {
        cin >> n >> k;
 
        HalloumiBoxes (n, k);
    }
    return 0;
}