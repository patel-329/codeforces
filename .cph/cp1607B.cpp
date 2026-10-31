#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        long long x,c;
        cin>>x>>c;
        if(x%2==0)
        {
            if(c%4==0) cout<<x<<"\n";
            else if(c%2==0) cout<<x+1<<"\n";
            else if(c%4==3) cout<<x+c+1<<"\n";
            else if(c%4==1) cout<<x-c<<"\n";
        } else
        {
             if(c%4==0) cout<<x<<"\n";
            else if(c%2==0) cout<<x-1<<"\n";
            else if(c%4==3) cout<<x-c-1<<"\n";
            else if(c%4==1) cout<<x+c<<"\n";
        }
    }
}