#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int size = 2*n;
    vector<long long> a(size);
    for(int i=0;i<size;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    vector<long long> b(size);
    for(int i=0;i<n;i++){
        b[2*i] = a[i];
        b[2*i + 1] = a[i + n];

    }
    for(int i=0;i<n;i++){
        cout << b[i] << (i == size - 1 ? "" : " "); 
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}