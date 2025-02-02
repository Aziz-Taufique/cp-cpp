#include<bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n){
    vector<bool>prime(n+1, true);

    prime[0] = false;
    prime[1] = false;

    for(int i=2;i*i<=n;i++){
        if(prime[i] == true){
            for(int j=i*i;j<=n;j+=i){
                prime[j] = false;
            }
        }
    }
    return prime;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    vector<bool> prime = sieve(n);
    for(int i=1;i<=n;i++){
        if(prime[i]){
            cout<<i<<" is prime"<<endl;
        }else {
            cout<<i<<" not a prime"<<endl;
        }
    }
    return 0;
}