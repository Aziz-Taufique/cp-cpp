#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> round;

    for(int i=10;i<=100000;i*=10){
        if(n%i != 0){
             round.push_back(n%i);
             n -= (n%i);
        }
     }
     cout<<round.size()<<endl;
     for(auto it: round){
        cout<<it<< " ";
     }
     cout<<endl;
    }
    return 0;
}