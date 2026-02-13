#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int min_val = 101;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] < min_val){
            min_val = a[i];
        }
    }
    int min_count = 0;
    for(int i=0;i<n;i++){
        if(a[i]==min_val){
            min_count++;

        }
    }
    cout << n-min_count << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}