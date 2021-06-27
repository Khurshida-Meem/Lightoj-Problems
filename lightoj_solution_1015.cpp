#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ll int a,t,b,x,c,d,e,lp,y;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        c=0;
        cin>>a;
        for(int j=0; j<a; j++)
        {
            cin>>b;
            if(b>0)
                c+=b;
        }
        cout<<"Case "<<i<<": "<<c<<endl;
    }
}
 
