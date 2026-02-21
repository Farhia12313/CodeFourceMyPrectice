#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int odd_count = 0;
    int even_count = 0;
    for(int i=0;i<2*n;i++){
        int a;
        cin >> a;
        if(a%2 == 0){even_count++;}
        else odd_count++;
    }
    if(odd_count == n && even_count == n) cout<<"Yes"<<"\n";
else cout<<"No" <<"\n";
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
