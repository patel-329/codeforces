#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    cin>>t;
    while(t--)
    {
        long long n,mi=1e9+10;
        cin>>n;
        vector<long long>v;
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            v.push_back(a);
            if(mi>=a) mi=a;
        }
        long long ans=v[0];
        for(long long i=0;i<n;i++)
        {
            // if(ans>=(mi&v[i])) ans=((mi)&(v[i]));
            ans=ans&v[i];
        }
        cout<<ans<<"\n";
    }
}