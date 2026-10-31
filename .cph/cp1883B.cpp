#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n, k,d=0;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>v(26);
        for(int i=0;i<n;i++)
        {
            v[(s[i]-'a')]++;
        }
        for(int i=0;i<26;i++)
        {
             if (v[i]%2!=0) d++;

        }
        if( d<=1 ||d-1<=k )
        {
            cout<<"YES"<<"\n";  
             } else cout<<"NO"<<"\n";
             

    }
}