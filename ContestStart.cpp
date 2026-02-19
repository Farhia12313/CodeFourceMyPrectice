#include<bits/stdc++.h>
using namespace std;
 void solve(){
    long long n,x,t;
    cin >> n >> x >> t;
    long long m=t/x;
    if(m >= n){
        long long res = (n*(n-1))/2;
        cout << res <<endl;
    } 
    else{
        long long full_overlap_count = n-m;
        long long res = full_overlap_count*m;
        res +=(m*(m-1))/2;
        cout << res << "\n";
    }
 }
 int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin >> k;
    while(k--){
        solve();
    }
    return 0;
 }