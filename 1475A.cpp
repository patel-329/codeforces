#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n;
        x=log2(n);
        if(pow(2,x)==n) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}