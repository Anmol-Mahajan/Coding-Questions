#include<bits/stdc++.h>
using namespace std;
int main(){
int T;
cin>>T;
while(T--!=0){

    int D,sum=0;
    cin>>D;
    int d[D]={0}, p[D]={0};
    for(int i=0;i<D;i++){

        cin>>d[i]>>p[i];
    }
    int Q;
    cin>>Q;
    int dead[Q], req[Q];
    for(int i=0;i<Q;i++){
        cin>>dead[i]>>req[i];
        for(int j=0;j<dead[i];j++){
            sum=sum+p[j];
        }
        if(sum>=req[i]) cout<<"Go Camp"<<endl;
        else cout<<"Go Sleep"<<endl;
    }
}
}
    /*for(int i=0;i<31;i++){

    }*/



