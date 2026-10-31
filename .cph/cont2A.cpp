#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        int n,k,c=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;i=i+k)
        {
            for(int j=i;j<i+k;j++)
            {
                if(s[j]=='0')
                {
                    c++;
                    j=i+k-1;
                }
            }
        }
        cout<<((n/k)-c)<<"\n";

    }
}