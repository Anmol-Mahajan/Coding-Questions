#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int a,b;
        cin>>a>>b;
        int n=b-a+1;
        int arr[n];
        for(int i=0;i<=n;i++){
            if(a<=b){
                arr[i]=a;
                a=a+1;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        for(int j=arr[i];j>0;j=j>>1)
    {
        ans=ans+(j&1);
    }
    cout<<ans<<endl;
        t--;
    }


}
