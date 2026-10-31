#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long min1=1e9+10;
        long long min2= 1e9+10;
        long long sum2=0;
        while(n--)
        {
         int m;
         cin>>m;
         vector<long long> v;
         for(int i=0;i<m;i++)
         {
            long long a;
            cin>>a;
            v.push_back(a);
         }
         sort(v.begin(),v.end());
         sum2=sum2+v[1];
         min1=min(v[0],min1);
         min2=min(v[1],min2);
        }
        long long ans=sum2-min2+min1;
        cout<<ans<<"\n";
    }
}