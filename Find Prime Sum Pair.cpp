#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        long long int n;
        cin>>n;
        vector<int>v;
        for(int i=2;i<n;i++){
            if(isPrime(i)){
                v.push_back(i);
            }
        }
        int flag=0;
        int l=0;
        int r=v.size()-1;
        while(l<=r){
            int s=v[l]+v[r];
            if(s>n) r--;
            else if(s<n) l++;
            else{
                flag=1;
                if(l==r){
                    cout<<v[l]<<" "<<v[l]<<endl;
                }
                else{
                    cout<<v[l]<<" "<<v[r]<<endl;
                    break;
                }
            }
        }
        if(!flag) cout<<"-1"<<endl;
    }
}
