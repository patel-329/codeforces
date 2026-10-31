#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int >v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==1) break;
            else if(v[i]==(-1))
            {
                v[i]=1;
                break;
            }
        }
        for(int i=n-1;i>-1;i--)
        {
            if(v[i]==1) break;
            else if(v[i]==(-1))
            {
                v[i]=1;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==(-1)) v[i]=0; 
            cout<<v[i]<<" ";
        }
        cout<<"\n";

    }

}