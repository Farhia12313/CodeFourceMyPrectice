#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) a[i]=i;
    if(n % 2 == 0){
        for(int i=1;i<n;i+=2){
            swap(a[i],a[i+1]);
        }}
        else{
            swap(a[1],a[2]);
            swap(a[1],a[3]);
            for(int i=4;i<n;i+=2){
                swap(a[i],a[i+1]);
            }
        }
        for(int i=1;i<=n;i++){
            cout << a[i] << (i == n?"":" ");
        }
    cout <<"\n";
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