#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        long long a,b,n,sum=0;
        cin>>a>>b>>n;
        vector<long long>v;
        for(auto i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            v.push_back(x);

            sum+=min(v[i],a-1);
        }
        sum+=b;
        cout<<sum<<"\n";
        }
}