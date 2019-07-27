#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main(){

int T;
cin>>T;
char k[100];
cin.getline(k,100);
while(T!=0){
    string S;
    getline(cin,S);
    int x=S.length();
    //cout<<x;
    string temp;
    string s="not";
    vector<string>v;
    for(int i=0;S[i]!='\0';i++){

        if(S[i]!=' '){
        temp=temp+S[i];
        }
    else{
        v.push_back(temp);
        temp='\0';
    }
    }
   /* for(int i=0;i<v.size();i++){
        if(v[i]==s) {
            cout<<" Real Fancy /n";
            break;
        }
        else{
            cout<<"regularly fancy \n";
            break;
        }
    }*/
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    T--;
}
}
