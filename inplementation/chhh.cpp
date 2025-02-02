#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<pair<int, int>> v;
    for(int i=0;i<n;i++){
        v.push_back({arr[i], i+1});
    }

    sort(v.begin(), v.end());

    vector<int> ind;
    // int ans = 0;
    for(auto it: v){
        if(it.first <= k){
            ind.push_back(it.second);
            // ans ++;
            k-=it.first;
        }else{
            break;
        }
    }

    // for(int i=0;i<n;i++){
    //     if(v[i].first <= k){
    //         // ans++;
    //         ind.push_back(v[i].second);
    //         k-=v[i].second;
    //     }else{
    //         break;
    //     }
    // }


    cout<<ind.size()<<endl;
    for(auto it: ind){
        cout<<it<<" ";
    }
   
    return 0;
}