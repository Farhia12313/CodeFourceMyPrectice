#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin >> n;
    if(n % 2050 != 0){
        cout << -1 << "\n";
        return ;
    }
    ll k = n/2050;
    ll ans = 0;
    while(k > 0){
        ans+=(k%10);
        k/=10;
    }
    cout << ans <<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
       solve();

}
return 0;
}
