#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v;
        vector<int>hsh(2*1e5 +5);
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            hsh[v[i]]++;
        }
    }
}