#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        int n,c=0,p=0;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
           
        }
    sort(v.begin(), v.end(), greater<int>());
    
        if(v[0]==v[1] && v[0]==v[n-1]) cout<<"no"<<"\n";
        else{
            cout<<"yes"<<"\n";
            swap(v[1],v[n-1]);
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            } cout<<endl;
        }
    
       }
       }