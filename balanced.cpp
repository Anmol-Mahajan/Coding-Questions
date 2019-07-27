#include<bits/stdc++.h>
using namespace std;


bool areParanthesisBalanced(char expr[])
{
    stack<char> s;
    char a, b, c;


    for (int i=0; i<strlen(expr); i++)
    {
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{')
        {

            s.push(expr[i]);
        }
        else
        {
            switch (expr[i])
            {
            case ')':

                if(s.empty())
                    return false;

                a = s.top();
                s.pop();
                if (a=='{' || a=='[')
                    return false;
                break;
            case '}':

                if(s.empty())
                    return false;

                b = s.top();
                s.pop();
                if (b=='('||b=='[')
                    return false;
                break;
            case ']':

                if(s.empty())
                    return false;


                c=s.top();
                s.pop();
                if (c=='('||c=='{')
                    return false;
                break;
            }
        }
    }


    if (s.empty())
        return true;
    else
        return false;
}


int main()
{
    char expr[1000000];
    cin>>expr;

    if(areParanthesisBalanced(expr))
        cout<<"True";
    else
        cout<<"false";
    return 0;
}
