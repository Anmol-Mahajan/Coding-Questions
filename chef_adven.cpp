#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T!=0){
        int count=0;
        long long int N,M,X,Y;
        long long int power=1,knowledge=1;
        cin>>N>>M>>X>>Y;
        while(knowledge!=N)
        {
            while(power!=M){

                power=power+Y;
                if(power==M){
                    count=1;
                    break;
                }
                if(power>M) break;
            }

            knowledge=knowledge+X;

            if(knowledge==N){
            count=1;
            break;
            }
            if(knowledge>N) break;

        }
        if(count==1) cout<<"Chefirnemo"<<endl;
        else{
            cout<<"Pofik"<<endl;
        }

        T--;
    }
}
