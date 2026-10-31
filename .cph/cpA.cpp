#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
    
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<long long>v;
       for(int i=0;i<n;i++)
       {
        long long a;
        cin>>a;
        v.push_back(a);

       } 
       long long a=v[0] ,b=v[n-1];

       if(a>=b) 
       {
        while(b)
        {
            if(a%b==0) 
            {
                cout<<b<<"\n";
                break;
            } else
            {
                long long p;
                p=b;
                b=a%b;
                a=p;
            }
        }
       } else
       {
         while(a)
        {
            if(b%a==0) 
            {
                cout<<a<<"\n";
                break;
            } else
            {
                long long k;
                k=a;
                a=b%a;
                b=k;
            }
       }
          }  
         }
}