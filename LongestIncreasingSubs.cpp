#include<bits/stdc++.h>
using namespace std;
int LIS(int a[],int n){
    int *dp=new int[n];

    for(int i=0;i<n;i++){
            dp[i]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]&&dp[i]<dp[j]+1){
                dp[i]=dp[j]+1;
            }
        }
    }
    int maxi=0;

    for(int i=0;i<n;i++){
        if(dp[i]>maxi) maxi=dp[i];
    }
    return maxi;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<LIS(a,n)<<endl;
}
