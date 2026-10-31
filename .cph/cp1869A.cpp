#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,c=0,p=0;
        cin>>n;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            if(a!=0) c++;
            if(a==0) p=i;
        }
        if(c>0)
        {
            if(n%2!=0)
            {
            cout<<4<<"\n";
            cout<<1<<" "<<n-1<<"\n";
            cout<<1<<" "<<n-1<<"\n";
            cout<<n-1<<" "<<n<<"\n";
            cout<<n-1<<" "<<n<<"\n";

                
            } else
           { cout<<2<<"\n";
            cout<<1<<" "<<n<<"\n";
            cout<<1<<" "<<n<<"\n";
           }
        } else cout<<0<<"\n";
    }
}