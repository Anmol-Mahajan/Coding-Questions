#include<bits/stdc++.h>
using namespace std;
int candies(int arr[],int n){
    int dp[100000];
    dp[0]=arr[0];
    dp[2]=arr[2];
    int candy=1;
    //int candy_increment=1;
    for(int i=1;i<=n;i+=2){
        if(dp[i]>dp[i-1]&&dp[i]>dp[i+1]){
            candy=1;
            dp[i-1]=candy;
            dp[i+1]=candy;
            dp[i]=candy+1;
      //      candy_increment++;
        }
        if(dp[i]>dp[i-1]&&dp[i]<dp[i+1]){
            dp[i]=candy++;
            dp[i+1]=candy+1;


        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        cout<<dp[i]<<" ";
    }
    return sum;

}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
int minimum_candies=candies(arr,n);
cout<<minimum_candies<<endl;
}
