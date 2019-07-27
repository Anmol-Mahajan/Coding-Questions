#include<bits/stdc++.h>
using namespace std;
string CheckNumber(int n){
    int temp=n;
    while(temp>0){
        if(temp%1000==144) temp/=1000;
        else if(temp%100==14) temp/=100;
        else if(temp%10==1)temp/=10;
        else {
            return "No";
        }
    }
    return "Yes";
}
int main(){
    int n,flag=0;
    cin>>n;
    cout<<CheckNumber(n);
}

