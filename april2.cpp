#include<bits/stdc++.h>
using namespace std;
void subString(string s, int n,char X)
{
    bool ans;
    long long int i,j,count=0;
    char char_array[n+1];
    for ( i = 0; i < n; i++){
        for (int len = 1; len <= n - i; len++) {
            string str= s.substr(i, len);
            strcpy(char_array, str.c_str());
           if(char_array[i]=='X'){
            ans=true;
           }
        //cout << s.substr(i, len) << endl;
        }
        if(ans==true){
            count++;
        }
    }
    cout<<count<<endl;
}
int main(){
int T;
cin>>T;
while(T!=0){
    long long int N;
    cin>>N;
    string S;
    cin>>S;
    char X;
    cin>>X;
    subString(S,N,X);
    T--;
}
}
