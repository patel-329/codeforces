#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,c=0,p=0,q=0,min=11;
        cin>>n>>k;
         vector<long long>v;
    for(long long i=0;i<n;i++)
    {
       long long a;
       cin>>a;
       v.push_back(a);
       if((v[i]%k)==0)
       {
        c++;

       }else if (k==4 )
       {
        if( (k-(v[i]%k)==1)) p++;
        else if (k-(v[i]%k)==2) q++;
         
        
       } else if (min>(k-(v[i]%k)))
       {
        min=(k-(v[i]%k));
       }
    }
    if(c!=0)
    {
        cout<<0<<"\n";
       
    }else {
        if(k==4)
        {
            if(q>=2) cout<<0<<"\n";
            else if (p>=1||q==1) cout<<1<<"\n";
            else cout<<2<<"\n";
        } else  cout<<min<<"\n";
    }
}
}
    
   