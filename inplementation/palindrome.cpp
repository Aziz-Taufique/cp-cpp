#include<bits/stdc++.h>
using namespace std;

void isPalindrome(){
    int n;
    cin>>n;
    
    string s;
    cin>>s;

    int i = 0;
    int j = n-1;

    while(i <= j){
        if(s[i] != s[j]){
            int diff = abs(s[i]-s[j]);
            if(diff != 2){
                cout<<"NO"<<endl;
                return;
        }
      }
        i++;
        j--;
    }
    cout<<"YES\n";
    return;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        isPalindrome();
    }
    return 0;
}