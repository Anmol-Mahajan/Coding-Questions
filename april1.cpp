#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
      long long int i, largest = 0, second_largest = 0, pos1, pos2;
       long long int N;
       cin>>N;
       long long int A[N];
       for (i = 0; i<N; ++i)
       {
              cin >> A[i];
       }

       for (i = 0; i<N; ++i)
       {
              if (A[i]>largest)
              {
                     largest = A[i];
                     pos1 = i;
              }
       }

       for (i = 0; i<N; ++i)
       {
              if (A[i]>second_largest)
              {
                     if (A[i] == largest)
                           continue;
                     second_largest = A[i];
                     pos2 = i;
              }
       }
       //cout<< largest<<endl;
       cout<< second_largest%largest<<endl;


}
