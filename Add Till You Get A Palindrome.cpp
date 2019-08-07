#include<bits/stdc++.h>
using namespace std;
int ReverseDigits(long long int n){
    long long rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
bool isPalindrome(long long int n){
    return (ReverseDigits(n)==n);
}
void ReverseAdd(long long int n){
    long long int rev_num=0;
    long long int count=0;
    while(n<=4294967295){
        rev_num=ReverseDigits(n);
        n=rev_num+n;
        count++;
        if(isPalindrome(n)){
            cout<<count<<" "<<n<<endl;
            break;
        }
        else if(n>4294967295){
            cout<<"No Palindrome Exists"<<endl;
            break;
        }


    }
}
int main(){
long long int n;
cin>>n;
ReverseAdd(n);
}
