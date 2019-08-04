#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,num,sum,rem;
cin>>a>>b;
for(int i=a;i<=b;i++){
    num=i;
    sum=0;
    for(;num>0;num/=10){
        rem=num%10;
        sum=sum+ rem*rem*rem;

    }
    if(sum==i) cout<<i<<endl;
}
}
