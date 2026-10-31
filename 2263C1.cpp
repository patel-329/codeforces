#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        int n,s=0;
        cin>>n;
        int m=n;
        vector<int>v;
        set<int>st;
        vector<int>vf(1e5+10);
        vector<int>res;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            for(int j=a*i;j<((a*i)+i);j++)
            {
                
                if(j<n+10)
                vf[j]++;
            }
        } 
      
         for(int i=0;i<vf.size();i++)
         {
            if(vf[i]==0 && i<n) res.push_back(i);
         }
         cout<<res.size()<<"\n";
         for(int i=0;i<res.size();i++)
         {
            cout<<res[i]<<" ";
         } cout<<endl;
    
        

    }
}
