#include<bits/stdc++.h>// Check I th bit from LSB
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    int x=1;
    int mask=x<<i;
    int ans=n&mask;

    if(ans) cout<<"Set"<<endl;
    else cout<<"Clear"<<endl;

}
