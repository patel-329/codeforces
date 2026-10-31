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
            if(v[i]==2) c++;
        }
        p=c;
        if(c==0) cout<<1<<"\n";
        else if(c%2!=0) cout<<-1<<"\n";
        else {
            for(int i=0;i<n;i++)
            {
                if(v[i]==2)
                c--;
                if(c==p/2)
                {
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
    }
}