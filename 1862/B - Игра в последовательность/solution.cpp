#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--) {
 
        int n;
        cin >> n; // length of array b
 
        vector <int> b(n);
        vector <int> m;
 
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
 
        m.push_back(b[0]);
 
        for (int i = 1; i < n; i++) {
            if (b[i] >= b[i-1])
            m.push_back(b[i]);
 
            else {
                m.push_back(b[i]);
                m.push_back(b[i]);
            }
        }
 
        cout << m.size() << endl;
 
        for (int i = 0; i < m.size(); i++)
        cout << m[i] << " ";
        
        cout << endl;
    }
}