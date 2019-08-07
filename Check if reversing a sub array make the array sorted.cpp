#include<bits/stdc++.h>
using namespace std;
bool CheckReverse(int arr[], int n){
    int temp[n];
    for(int i=0;i<n;i++) temp[i]=arr[i];
    sort(temp,temp+n);
    int front;
    for(front=0;front<n;front++){
        if(temp[front]!=arr[front]) break;
    }
    int back;
    for(back=0;back<n;back++){
        if(temp[back]!=arr[back]) break;
    }
    if(front>=back) return true;
    do{
        front++;
        if(arr[front-1]<arr[front]) return false;

    }while(front!=back);
    return true;


}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        if(CheckReverse(arr,n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
