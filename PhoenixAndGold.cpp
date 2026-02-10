#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin>> n >> x;
    vector<int>w(n);
    int sum = 0;
    for(int i=0;i<n;i++){
        cin >> w[i];
        sum+=w[i];
    }
    if(sum == x){
        cout << "NO" <<"\n";
        return ;
    }
    cout << "YES" <<"\n";
    int current_sum = 0;
    for(int i=0;i<n;i++){
        current_sum+=w[i];
        if(current_sum == x){
            swap(w[i],w[i+1]);
        }
        cout << w[i] <<" ";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}