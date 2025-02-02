#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n == 0 || n == 1) return false;

    for(int i=2;i<n;i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(prime(n)){
        cout<<"PRIME"<<endl;
    }else{
        cout<<"Not prime"<<endl;
    }
    return 0;
}