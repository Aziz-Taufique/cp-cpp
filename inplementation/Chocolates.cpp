#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> chocolates;
    for(int i=0;i<n;i++){
        int item;
        cin>>item;
        chocolates.push_back(item);
    }

    long long ans = 0;
    ans += chocolates[chocolates.size()-1];
    long long mx = 0;
    mx = chocolates[chocolates.size()-1]-1;
    for(int i=chocolates.size()-2;i>=0;i--){
        
        ans += min(mx, chocolates[i]);
        mx = min(mx, chocolates[i])-1;
        if(mx <= 0) {
            break;
        }
       
    }
    cout<<ans<<"\n";
    return 0;
}