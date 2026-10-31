#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a ;
            cin>>a;
            v.push_back(a);
            if(v[i]==1) v[i]=2;
        }
        for(int i=1;i<n;i++)
        {
           if(v[i]%v[i-1]==0) v[i]++;
           cout<<v[i-1]<<" ";
        } 
        cout<<v[n-1]<<" "<<"\n";
    }}

    
