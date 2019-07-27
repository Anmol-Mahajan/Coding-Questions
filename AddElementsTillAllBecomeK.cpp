#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,count=0;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];// 1 10 12 9 2 3
sort(arr,arr+n); //1 2 3 9 10 12
int sum=0;
for(int i=0;i<n;i++){
    if(sum<k){sum+=arr[i];
        count++;
        }
    else{
        break;
    }
}
cout<<count-1<<endl;
}
