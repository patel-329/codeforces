#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a ,long long b)
{
    if(b%a==0) return a;
   return gcd(b%a ,a);
}
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
       if(v[0]>=v[n-1]) 
       {
        cout<<gcd(v[n-1],v[0])<<"\n";
       } else cout<<gcd(v[0],v[n-1])<<"\n";
    }
}