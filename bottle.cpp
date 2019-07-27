#include<bits/stdc++.h>
using namespace std;
int arr[100][100];

int Bottle(int arr[],int sPos,int ePos,int yr){
    if(sPos>ePos) return 0;
    if(arr[sPos][ePos]!=-1) return arr[sPos][ePos];
    if(sPos==ePos){
        arr[sPos][ePos]=arr[sPos]*yr;
        return  arr[sPos]*yr;
    }
    if(sPos==ePos) return arr[sPos]*yr;
    int leftSold=arr[sPos]*yr+Bottle(arr,sPos+1,ePos,yr+1);
    int rightSold=arr[ePos]*yr+Bottle(arr,sPos,ePos-1,yr+1);
    return max(leftSold,rightSold);
}
int main(){
    int arr[]={2,3,5,1,4};
    int n=5;
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            arr[i][j]=-1;
        }
    }
    cout<<Bottle(arr,0,n-1,1);
}
