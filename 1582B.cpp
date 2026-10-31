#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    cin>>t;
    while(t--)
    {

    long long n,zro=0,on=0;
    cin>>n;
    vector<long long>v;
    for(long long i=0;i<n;i++)
    {
       long long a;
        cin>>a;
        v.push_back(a);
        if(v[i]==0) {zro++;}
         if(v[i]==1){ on++;}
    } 
    long long p=((pow(2,zro))*(on));
    if(on==0) {cout<<0<<"\n";}
     else {cout<<p<<"\n";}
}
}