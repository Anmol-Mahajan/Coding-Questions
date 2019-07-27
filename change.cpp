#include<bits/stdc++.h>
using namespace std;
int deno[10]={1,2,6};
int denoCount=3;
void change(int money,int countsoFar,int &minCount)
{
    if(money<0) return;
    if(money==0){
        if(countsoFar<minCount) minCount=countsoFar;
        return;
    }
    for(int i=0;i<denoCount;i++){
        if(deno[i]<=money)
            change(money-deno[i],countsoFar+1,minCount);


    }
}
int main()
{
int money=8;
int minCount=INT_MAX;
change(money,0,minCount);
cout<<minCount;
}
