#include<bits/stdc++.h>

using namespace std;

bool valid(long long int a[],long long int n,long long int m,long long int mid){
    int student=1;
    long long int current_Books=0;
    for(long long int i=0;i<n;i++){
        if(current_Books+a[i]>mid){
            current_Books=a[i];
            student++;
            if(student>m) return false;
        }
        else{
            current_Books+=a[i];
        }
    }
    return true;
}
long long int Books(long long int a[],long long int n, long long int m){
    long long int total_pages=0;
    long long int s=0;
    long long int e=0;

    for(long long int i=0;i<n;i++){
        total_pages+=a[i];
        s=max(s,a[i]);// means atleast these many chocolates wilong long int be assigned to someone
    }
    e=total_pages;
    int ans=0;
    while(s<=e){
        long long int mid=(s+e)/2;
        if(valid(a,n,m,mid)){
            ans=mid;
            e=mid-1;

        }
        else{
            s=mid+1;
        }

    }
    return ans;
}
int main(){
    int T;
    cin>>T;
    while(T--!=0){
        long long int n;
        long long int m;
        cin>>n;
        long long int a[n];
        for(long long int i=0;i<n;i++) cin>>a[i];
        cin>>m;
        long long int ans=Books(a,n,m);
        cout<<ans<<endl;

    }
}
