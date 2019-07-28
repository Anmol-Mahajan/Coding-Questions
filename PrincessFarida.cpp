#include<bits/stdc++.h>
using namespace std;
int GetCoins(long long int a[],long long int n){
    int sum=0;
    if(n==1) return a[n-1];
    if(n==0) return 0;
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            sum+=a[i];

        }
        else if(a[i-1]>a[i+1]&&a[i]<a[i-1]) sum+=a[i-1];
        else if(a[i+1]>a[i-1]&&a[i]>a[i+1]) sum+=a[i+1];
    }
    return sum;
}
int main(){
int T;
cin>>T;
while(T--){
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    long long int goldcoins=GetCoins(a,n);
    cout<<goldcoins<<endl;
}
}
