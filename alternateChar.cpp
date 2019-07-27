#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     int count=0;
     int q,j;
     cin>>q;
     for(int i=0;i<q;i++){
        cin>>s;
        count=0;
        for( j=0;j<s.length();j++){
            if(s[j]==s[j+1]){
                count++;
            }
        }
        cout<<count<<endl;
    }


}
