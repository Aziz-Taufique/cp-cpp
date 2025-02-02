#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n == 0 || n == 1) return false;

    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
   for(int i=1;i<=n;i++){
    if(prime(i)){
        cout<<i<<" ";
    }
   }
    return 0;
}