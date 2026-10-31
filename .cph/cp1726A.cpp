#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        int n,max=-2000,min=2000,dmax=-2000;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            if(max<=v[i]) max=v[i];
            if(min>=v[i]) min=v[i];
            if(i>=1)
            {
                if(dmax<=(v[i-1]-v[i])) dmax=(v[i-1]-v[i]);
            }

        }
        if((max==v[n-1]) ||(min==v[0])) cout<<(max-min)<<"\n";
        else if((dmax<=(max-v[0]))||(dmax<=(v[n-1]-min)))
        { 
            if((max-v[0])>=(v[n-1]-min)) cout<<(max-v[0])<<"\n";
       else cout<<(v[n-1]-min)<<"\n";
        }
        else cout<<dmax<<"\n";
        }
}