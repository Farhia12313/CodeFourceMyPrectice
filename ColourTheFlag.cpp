#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for(int i = 0; i < n; ++i){
        cin >> grid[i];
    }

    bool possible1 = true; // প্যাটার্ন ১: (i+j) even -> R, odd -> W
    bool possible2 = true; // প্যাটার্ন ২: (i+j) even -> W, odd -> R

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(grid[i][j] == '.') continue;
            
            // Pattern 1 check
            if((i + j) % 2 == 0){
                if(grid[i][j] == 'W') possible1 = false;
                if(grid[i][j] == 'R') possible2 = false;
            } else {
                if(grid[i][j] == 'R') possible1 = false;
                if(grid[i][j] == 'W') possible2 = false;
            }
        }
    }

    if(possible1){
        cout << "YES" << "\n";
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                cout << ((i + j) % 2 == 0 ? 'R' : 'W');
            }
            cout << "\n";
        }
    } 
    else if(possible2){
        cout << "YES" << "\n";
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                cout << ((i + j) % 2 == 0 ? 'W' : 'R');
            }
            cout << "\n";
        }
    } 
    else {
        cout << "NO" << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}