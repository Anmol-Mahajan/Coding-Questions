#include<bits/stdc++.h>
using namespace std;
int swapToSort(long long int a[],int n)
{
    int check=0;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=a[i];
    }
    sort(arr,arr+n);

    for(int i=0;i<n;i++){
        if(arr[i]==a[i]){
            check=1;

        }
        else if(arr[i]!=a[i]) {
            check=0;
            break;
        }

    }
    if(check==1){ return 0;}



}
int main()
{
    int ans,n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
     ans=swapToSort(a,n);
    cout<<ans<<endl;
}
