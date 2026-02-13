#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int val = 1;
    while(val*2<=n){
        val*=2;
    }
    cout << val-1 <<"\n";

} 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}