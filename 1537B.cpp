#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m>>i>>j;
        if((i<=n/2 && j<=m/2)||(i>n/2 && j>m/2)) cout<<1<<" "<<m<<" "<<n<<" "<<1<<"\n";
        else  cout<<1<<" "<<1<<" "<<n<<" "<<m<<"\n";
    }
}