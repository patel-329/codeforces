#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int p=n+1 ,gr=2*n-k;
        int m=gr;
        int q=m+1;
        if(k<n ||k==2*n) cout<<-1<<"\n";
        else 
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(i==m && j>(m))
                    {
                        cout<<q<<" ";
                        q++;
                    } else if(i==j && gr>0) 
                    {
                        cout<<j<<" ";
                        gr--;
                    }
                    else 
                    {
                        cout<<p<<" ";
                        p++;
                    }
                } cout<<"\n";
            }
        }

   }
}