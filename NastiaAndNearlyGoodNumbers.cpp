#include<bits/stdc++.h>
using namespace std;
void solve(){
   long long a,b;
   cin >> a >> b;
   if(b == 1){
    cout <<"NO" <<"\n";
   } 
   else{ cout <<"YES"<< "\n";
   long long x = a;
   long long y = a*b*1LL;
   long long z = x+y;
   if(z%(a*b)==0){
    y=a*b*2LL;
    z=x+y;
   }
   cout << x <<" " << y <<" "<<z <<"\n";
}
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){
        solve();
    }
    return 0;
}
