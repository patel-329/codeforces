#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        int n,c=0,m=0;
        cin>>n;
        vector<int >v;
        vector<int>in(n);
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            if(a==0) 
            {
                c++;
                
                m=i;
            } if(a==1) in[i]=10;
        }
        if(c==0)
        {
            cout<<"yes"<<"\n";
            for(int i=0;i<n;i++)
            {
                cout<<"a";
            }
            cout<<"\n";
        } else if(c==1) cout<<"no"<<"\n";
        else if(c>=2)
        {
            cout<<"yes"<<"\n";
            for(int i=0;i<n;i++)
            {
                if(in[i]==10)
                {
                    cout<<"a";
                } else if(i==m) cout<<"b";
                else cout<<"c";
            }cout<<"\n";
        }
    
    }
}