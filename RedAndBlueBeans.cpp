#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll r,b,d;
    cin >> r >> b >> d;
    ll min_val = min(r,b);
    ll max_val = max(r,b);
    if(max_val <= min_val * (1+d)){
        cout <<"YES"<<"\n";

    }
    else cout <<"NO"<<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}