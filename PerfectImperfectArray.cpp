#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        int x;
        for(int i=0;i<n;i++){
            cin >> x;
            int a = sqrt(x);
            if(a*a!=x)ans=1;
        }
        if(ans==1)cout <<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}