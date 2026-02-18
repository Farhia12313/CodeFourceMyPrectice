#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    long long sum = 0;
    for(int i=0;i<n;++i){
        int val;
        cin >> val;
        sum += val;
    }
    if(sum == n){
        cout << 0 <<"\n";
    }
    else if(sum < n){
        cout << 1 << "\n";
    }
    else{
        cout << sum - n <<"\n";    }

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