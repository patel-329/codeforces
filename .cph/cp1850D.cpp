#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        long long n,d=0,p=0,k;
        cin>>n>>k;
        vector<long long> v;
        for(int i=1;i<=n;i++)
        {
            long long a;
            cin>>a;
            v.push_back(a);

        }sort(v.begin(),v.end());
        for(int i=1;i<n;i++)
        {
          if( abs(v[i]-v[i-1])<=k) d++;
          else{
            if(d>0 && p<=d) p=d ;
            d=0;
          }
        }
        if(p<d) p=d;
        cout<<v.size()-p-1<<"\n";

    }
}