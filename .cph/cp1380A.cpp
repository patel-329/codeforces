#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        int n,p=-1;
        cin>>n;
        vector<int> v;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            if(i>=3)
            {if((v[i]<v[i-1]) && (v[i-1]>v[i-2])) p=i;
    }
}
            if(p!=-1)
            {
                cout<<"yes"<<"\n";
                cout<<p-2<<" "<<p-1<<" "<<p<<"\n";
            } else cout<<"no"<<"\n";
       }   }