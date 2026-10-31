#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        if(n>1&&v[n-1]-s>=s-v[0]&& s<=v[n-1]&&s>=v[0])
        {
            cout<<2*(s-v[0])+(v[n-1]-s)<<"\n";
        }else if (n>1&&v[n-1]-s<s-v[0]&& s<=v[n-1]&&s>=v[0])
        {
            cout<<2*(v[n-1]-s)+(s-v[0])<<"\n";
        } else if (s>=v[n-1])
        {
            cout<<s-v[0]<<"\n";
        } else if (s<=v[0])
        {
            cout<<v[n-1]-s<<"\n";
        }

    }
}