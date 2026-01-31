#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ans =0;
    for(int i=0;i < s.size();i++){
        int cnt = 0;
        char current = s[i];
            while(i < s.size() && s[i] == current){
                cnt++;
                i++;
            }
        
            
            if(cnt >= 7) ans = 1;
            i--;
                
            }
            if(ans == 1) cout <<"YES\n";
            else cout <<"NO\n";
            return 0;
        }
    
