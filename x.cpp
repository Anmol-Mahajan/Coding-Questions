
#include<bits/stdc++.h>
using namespace std;
int main(){
unordered_set<char>s;
string str;
cin>>str;
for(int i=0;i<str.length();i++){
    char x=str[i];
    if(s.find(x)!=s.end()){
        cout<<x<<endl;
        break;
    }
    else{
        s.insert(x);
    }
}

}
