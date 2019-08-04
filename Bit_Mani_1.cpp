/*#include<bits/stdc++.h>// number in array which is not in pair using XOR(^)
using namespace std;
int main(){
int a[]={1,3,2,0,2,1,3};
int ans=0;
for(int i=0;i<7;i++){
    ans=ans^a[i];
}
cout<<ans<<endl;
}
// Check I th bit from LSB
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    int x=1;
    int mask=x<<i;
    int ans=n&mask;

    if(ans) cout<<"Set"<<endl;
    else cout<<"Clear"<<endl;

}
//Unset i th bit from LSB
 #include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    int ans=n&(~(1<<i));
    cout<<ans<<endl;
}
//Flip  i th bit from LSB
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    int flip=N^(1<<i);
    cout<<flip<<endl;
}
//Power of 2 or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    if((n&(n-1))==0) cout<<"Power of 2"<<endl;
    else{
        cout<<"Not a Power of 2"<<endl;
    }
}

//Clear All set bit till i th position from LSB
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    int ans=n&(~((1<<(i+1)-1)));
    cout<<ans;


}
*/


