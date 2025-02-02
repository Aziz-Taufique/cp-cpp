#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    string ans = "";
    for(int i=0;i<n.size();i++){
        int y = n[i]-'0';
        int inv = 9-y;
       ans += (min(y, inv) + '0');
    }
    
    if(ans[0] == '0') ans[0] = '9';
   
    cout<<ans<<endl;
    return 0;
}