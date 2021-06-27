#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    double b;
    ll int a,t,x,c,d,e,lp,y;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        lp=0;
        cin>>a;
        b=sqrt(a);
        x=ceil(b);
        d=(x-1)*(x-1);
        e=(d+1)+(x-1);
        if(e==a)
        {
            cout<<"Case "<<i<<": "<<x<<" "<<x<<endl;
        }
        else
        {
            if((x*x)%2!=0)
            {
                if(a>e)
                {
                    cout<<"Case "<<i<<": "<<(x*x)-a+1<<" "<<x<<endl;
                }
                else
                {
                    cout<<"Case "<<i<<": "<<x<<" "<<a-d<<endl;
                }
            }
            else
            {
                if(a>e)
            {
                cout<<"Case "<<i<<": "<<x<<" "<<(x*x)-a+1<<endl;
            }
            else
            {
                cout<<"Case "<<i<<": "<<a-d<<" "<<x<<endl;
            }
            }
 
        }
 
    }
}
