#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            if(a==0) c++;
        }
        if(v[0]==0 && v[n-1]==0)
        {
            cout<<0<<"\n";
        } else if (v[0]!=0 && v[n-1]!=0 && c>=2)
        {
            cout<<2<<"\n";
        } else if((v[0]==0 && v[n-1]!=0 && c>1)||(v[0]!=0 && v[n-1]==0 && c>1))
        {
            cout<<1<<"\n";
        } else if(c<2) cout<<-1<<"\n";
        }
}