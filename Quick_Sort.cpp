#include<bits/stdc++.h>
using namespace std;
int Partition(int *a, int first, int last){
    int pivot=a[last];
    int pIndex=first;
    for(int i=first;i<last;i++){
        if(a[i]<=pivot){
            swap(a[i],a[pIndex]);
            pIndex++;
        }
    }
    swap(a[last],a[pIndex]);
    return pIndex;
}
void quicksort(int *a,int first, int last){
    if(first>=last) return;
    int pIndex=Partition(a,first,last);
    quicksort(a,first,pIndex-1);
    quicksort(a,pIndex,last);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";

}
