#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        int n,d=0,c=0;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a; 
            cin>>a;
            v.push_back(a);
            if(a==0) c++;
            else d++;
        }
        if(d>=c) cout<<"Bessie"<<"\n";
        else cout<<"Elsie"<<"\n";

    }
}