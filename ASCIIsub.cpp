#include<iostream>
#include<string>
using namespace std;

void SubSeq(string str, int sPos, string out,int &count,string str1[]){
    if (str[sPos]=='\0') {
        str1[count]=out;
        count++;
        return;
    }
    SubSeq (str, sPos+1, out,count,str1);
    SubSeq (str, sPos+1, out+str[sPos],count,str1);
    SubSeq (str, sPos+1, out+to_string((int)str[sPos]),count,str1);

}

int main(){
    string str;
    cin>>str;
    string out;
    int count=0;
    string str1[100]={};
    SubSeq(str,0,out,count,str1);
    cout<<count<<endl;
    for(int i=0;i<count;i++)
    cout<<str1[i]<<" ";
}
