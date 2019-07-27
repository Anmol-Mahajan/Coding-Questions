#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str,int left,int right)
{
    while(left<right){
        if(str[left]!=str[right]) return false;
        left++;
        right--;
    }
    return true;
}
int shift(string str)
{
    int n=str.length();
    int left=0;
    int right=n-1;
    int cnt=0;
    str=str+str;
    while(right<2*n-1){
        if(isPalindrome(str,left,right))
            break;
        left++;
        right++;
        cnt++;

    }
    return cnt;
}
int main()
{
    string str;
    cin>>str;
    int x=shift(str);
    cout<<x<<endl;

}
