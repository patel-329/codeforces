#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        long long x,y,k,i,sum=0;
        cin>>x>>y>>k;
        if (x==y) cout<<0<<"\n";
        else if (y<x) cout<<((((k+x)*(k+x-1))/2)-(((x-1)*x)/2))<<"\n";
        else if((y/x)==1) cout<<(y-x)*k<<"\n";
        else{
        for(i=0;i<k;i++)
        { 

            sum=(sum+(y%x));
             if(y/x==2 && y%x==0) break;
            y++;
            x++;
        }
        if(k-i<1) cout<<sum<<"\n";
        else cout<<sum+((k-i-1)*x)<<"\n";
    }
}

}