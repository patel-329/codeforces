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
            if(i>0&& v[i]%v[i-1]==0) 
            {
                if(v[i-1]==1 && v[i]%2==0) 
                {
                    v[i]++; v[i-1]++;
                } else if (v[i-1]==1 && v[i]%2!=0 && v[i]!=1) v[i-1]++;
                else if (v[i-1]==1 && v[i]%2!=0 && v[i]==1) 
                {
                    if(v[i-2]==3 && i>1) v[i-1]=2;
                    else v[i-1]+=2;
                }
                else v[i]++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        } cout<<"\n";
    }
}