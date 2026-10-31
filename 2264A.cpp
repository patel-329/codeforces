#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int sum=n+1;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            if(v[i]==i+1){}
            else if(sum>v[i]){sum=v[i];}
            else c++;
        }
         if(c==0) cout<<"YES"<<"\n";
         else cout<<"NO"<<"\n";  
          
    }
}