#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        long long n,d1=0,d2=0,d3=0,sum2=0,sum3=0,sum1=-1;
        cin>>n;
        vector<long long > v;
        if(n>0)
        {
        for(auto i=1;i<=1e6;i++)
        {
          if(n%i==0) d1++;
          else {
            if(d1>0 && sum1<=d1)  sum1=d1;
            d1=0;
          } if(n==i) break;
        
    } } if(sum1<d1) sum1==d1;
     if(n>1e6)
    {
        for(long long i=1e6+1;i<=1e12;i++)
        {
          if(n%i==0) d2++;
          else {
            if(d2>0 && sum2<=d2)  sum2=d2;
            d2=0;
          } 
        } 
    } if(sum2<d2) sum2==d2;
    if(n>1e12)
    {
        for(long long i=1e12+1;i<=1e18;i++)
        {
          if(n%i==0) d3++;
          else {
            if(d3>0 && sum3<=d3)  sum3=d3;
            d3=0;
          } 
        } 
    } if(sum3<d3) sum3==d3;
    long long p= max(sum1,sum2);
    long long q= max(p,sum3);
    cout<<q<<"\n";
    
      }  }
   
