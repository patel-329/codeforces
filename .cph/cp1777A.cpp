#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        vector<long long > v;
        for (int i=0;i<n;i++)
            {
                long long a;
                cin>>a;
                v.push_back(a);
               if(i>0)
               {
                if((abs(v[i]-v[i-1]))%2==0) c++;
               } 
            }
          cout<<c<<"\n";
        
    }
}