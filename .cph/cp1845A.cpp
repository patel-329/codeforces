#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        if(k>1 && x!=1)
        {
            cout<<"Yes"<<"\n";
            cout<<n<<"\n";
            for(int i=1;i<=n;i++)
            {
                cout<<1<<" ";
            }
            cout<<"\n";
        }else if(k>1 && x==1)
        {
            if(n%2==0)
            {
              cout<<"YES"<<"\n";
            cout<<n/2<<"\n";
            for(int i=1;i<=n/2;i++)
            {
                cout<<2<<" ";
            }
            cout<<"\n";   
            }else if(k>=3)
            {
               cout<<"YES"<<"\n";
            cout<<n/2<<"\n";
            for(int i=1;i<n/2;i++)
            {
                cout<<2<<" ";
            }
            cout<<3<<"\n";   
            }else 
            {
                cout<<"NO"<<"\n";
            }
        }else
        {
            cout<<"NO"<<"\n";
                }
    }       
}