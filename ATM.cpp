#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    if(x+0.50<=y)
    {
        int p=x;
        if(p%5==0)
        {
            cout<<fixed<<setprecision(2)<<(y-x-0.50)<<endl;
            return 0;
        }
    }

        cout<<fixed<<setprecision(2)<<y<<endl;



}
