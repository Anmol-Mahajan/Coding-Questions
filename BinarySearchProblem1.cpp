#include<bits/stdc++.h>
using namespace std;
/* //Code to find first and last occurrence of an element in a list having duplicate elements
int FirstOccurrence(int a[],int n,int p){
    int low=0;
    int high=n-1;
    int result=-1;
    while(high>=low){
        int mid=(low+high)/2;
        if(a[mid]==p){
            result=mid;
            high=mid-1;
        }
        else if(a[mid]>p) high=mid-1;
        else{
            low=mid+1;
        }
    }
    return result;
}
int LastOccurrence(int a[],int n,int p){
    int low=0;
    int high=n-1;
    int result=-1;
    while(high>=low){
        int mid=(low+high)/2;
        if(a[mid]==p){
            result=mid;
            low=mid+1;
        }
        else if(a[mid]>p) high=mid-1;
        else{
            low=mid+1;
        }
    }
    return result;
}*/
int rotated(int a[],int n){
    int low=0;
    int high=n-1;
    int result=-1;
    while(high>=low){
        int mid=(low+high)/2;
        //case1:
        if(a[low]<=a[high]) return low;
        //case2: find pivot, pivot will be smaller than its previous and next element
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
        if(a[next]>=a[mid]&&a[prev]>=a[mid]) return mid;
        // case3:
        if(a[mid]<=a[high]){
            high=mid-1;
        }
        if(a[mid]>=low) low=mid+1;
    }
    return -1;
}

int main(){
    int a[6];
    int p;
    for(int i=0;i<6;i++) cin>>a[i];
    int rotate_count=rotated(a,6);
    //cout<<"Find occurrence of: "<<endl;
    //cin>>p;
    //int x=FirstOccurrence(a,6,p);
    //int y=LastOccurrence(a,6,p);
    //cout<<x<<endl;
    //cout<<y<<endl;
    //cout<<y-x+1<<endl;//count of duplicates
    cout<<rotate_count<<endl;
}
