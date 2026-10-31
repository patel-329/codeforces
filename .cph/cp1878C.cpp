#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        long long n,k,x;
        cin>>n>>k>>x;
        
        
           
            
                if((x>=(k*(k+1))/2) && (x<=((n*(n+1))/2)-(((n-k)*(n-k+1))/2)))
               { 
                 cout<<"YES"<<"\n";
            
               } else 
               {
                cout<<"NO"<<"\n";
            
               }
            
            
        
    }
}