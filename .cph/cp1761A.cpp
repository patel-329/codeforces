#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(n==1) cout<<"yes"<<"\n";
        else if (n>(a+b+1)) cout<<"yes"<<"\n";
        else cout<<"no"<<"\n";
    }
}