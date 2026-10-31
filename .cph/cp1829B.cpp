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
            int a;
            cin>>a;
            v.push_back(a);

        }
        int c=0,d=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0){ c++;}
            else {
                if(d<=c)
                {
                    d=c;
                }
                c=0;
            }
        }
        if(d<=c) {d=c;}
        cout<<d<<"\n";
    }
}