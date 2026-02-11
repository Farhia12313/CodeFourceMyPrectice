#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> seen(26,false);
    bool suspicious = false;
    for(int i=0;i<n;i++){
        if(seen[s[i] - 'A']){
            if(s[i]!=s[i-1]){
                suspicious = true;
                break;
            }
        }
        seen[s[i] - 'A'] = true;
    }
    if(suspicious){
        cout <<"NO" <<"\n";
    }
    else cout <<"YES"<<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;

}