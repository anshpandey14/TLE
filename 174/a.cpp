#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n-2);
    
    for(int i = 0; i < n-2; i++) {
        cin >> b[i];
    }

    // Check if the pattern allows a valid array 'a' construction
    bool possible = true;

    for(int i = 0; i < n-4; i++) {
        // If two consecutive 1s appear in b, a forced pattern occurs
        if(b[i] == 1 && b[i+1] == 1) {
            possible = false;
            break;
        }
    }
    
    cout << (possible ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
