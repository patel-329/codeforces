#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    cin>>t;
    while(t--)
    {
        int n,d=1,c=1,mx=-1;
        cin>>n;
        vector<int>v1;
        vector<int>v2;
        vector<int>hsh1(2*n+10);
        vector<int>hsh2(2*n+10);
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v1.push_back(a);
        } for(int i=0;i<n;i++)
         {
             int a;
             cin>>a;

             v2.push_back(a);
         }
        for(int i=0;i<n-1;i++)
        {
            if(v1[i]==v1[i+1])
            {
                d++;
                if(hsh1[v1[i+1]]<d) (hsh1[v1[i+1]]=d);
            } else{
                d=1;
                if(hsh1[v1[i+1]]<d) (hsh1[v1[i+1]]=d);
            }
        }
        if(hsh1[v1[0]]<1) hsh1[v1[0]]=1;
         for(int i=0;i<n-1;i++)
        {
            if(v2[i]==v2[i+1])
            {
                c++;
                if(hsh2[v2[i+1]]<c) (hsh2[v2[i+1]]=c);
            } else{
                c=1;
                if(hsh2[v2[i+1]]<c) (hsh2[v2[i+1]]=c);
            }
        }
        if(hsh2[v2[0]]<1) hsh2[v2[0]]=1;
        vector<int>vf;
        for(int i=0;i<2*n+10;i++)
        {
            vf.push_back(hsh1[i]+hsh2[i]);
            if(mx<vf[i]) mx=vf[i];
        }
        cout<<mx<<"\n";
       
    }
}
