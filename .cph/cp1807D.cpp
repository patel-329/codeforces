#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<long long>v;
        vector<long long>sum(n);
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            v.push_back(a);
             if(i>0) sum[i]= sum[i-1]+v[i];

        }
        
        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            if((r-l+1)%2==0 &&l>1)
            {
                if((sum[n-1]-sum[r-1]+sum[l-2]+v[0])%2==0) cout<<"no"<<"\n";
                else  cout<<"yes"<<"\n";
            } else if((r-l+1)%2==0 &&l==1)
            {
                if((sum[n-1]-sum[r-1])%2==0) cout<<"no"<<"\n";
                else  cout<<"yes"<<"\n";
            } else if((r-l+1)%2!=0 &&l==1)
            {
                if(k%2==0)
                {
                    if((sum[n-1]-sum[r-1])%2==0) cout<<"no"<<"\n";
                else  cout<<"yes"<<"\n";
                } else
                {
                     if((sum[n-1]-sum[r-1])%2==0) cout<<"yes"<<"\n";
                else  cout<<"no"<<"\n";
                }
            } else if((r-l+1)%2!=0 &&l>1)
            {
                if(k%2==0)
                {
                    if((sum[n-1]-sum[r-1]+sum[l-2]+v[0])%2==0) cout<<"no"<<"\n";
                else  cout<<"yes"<<"\n";
                } else
                {
                    if((sum[n-1]-sum[r-1]+sum[l-2]+v[0])%2==0) cout<<"yes"<<"\n";
                else  cout<<"no"<<"\n";
                }
            }
        }
    }
}