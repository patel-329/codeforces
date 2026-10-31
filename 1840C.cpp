#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
{
    long long n,k,q,p=0,sum=0;
    cin>>n>>k>>q;
    vector<long long >v;
    vector<long long > v1;
    for(auto i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        v.push_back(a);
        if(a<=q)
        {
            v1.push_back(i);
        }
    }
   
    if(v1.size()<k)
    {
        cout<<0<<"\n";
    }else if (v1.size()>1)
{
    for(int i=1;i<v1.size();i++)
    {
        if(v1[i]-v1[i-1]==1)
        {
            p++;
        }
        else
        {
            int d=(p-k+1);
            if(d>=0)
            {
                sum+=((p-k+2)*(p-k+3))/(2);
            }
            p=0;
        }
    }
    if(v[v1[v1.size()-1]]<=q)
    {
        int m =(p-k+1);
        if(m>=0)
        {
            sum+=((p-k+2)*(p-k+3))/2;
        }
    }
    cout<<sum<<"\n";
}else
{
    cout<<1<<"\n";
}
    
    
}
}


