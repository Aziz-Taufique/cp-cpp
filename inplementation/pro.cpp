#include<bits/stdc++.h>
using namespace std;

int fun(int &a){
    return a *= 10;
}
int main(){
    int num = 10;
    cout<<"before: "<<num<<endl;
    cout<<"updated num is "<<fun(num)<<endl;
    cout<<"After :"<<num<<endl;
    return 0;
}