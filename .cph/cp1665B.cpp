#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
       long long n,max=0,c=0,p=0,ans=0;
        cin>>n;
        vector<long long>v;
        for(long long i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(long long i=0;i<n-1;i++)
        {
            if(v[i]==v[i+1])
            {
                c++;
            } else{
                if(max<(c+1) && c>0) max=c+1;
                c=0;
                        }
        } if(max<(c+1)) max=c+1;
        if(n%max==0)  p= n/max;
        else (p=1+(n/max));
        ans =log2(p);
        if(n==max) cout<<0<<"\n";
        else if(pow(2,ans)==p) cout<<(n-max)+ans<<endl;
        else cout<<(n-max)+ans+1<<endl;

    }
}