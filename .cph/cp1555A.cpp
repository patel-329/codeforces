#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n>=6&&(n%6==0 ||n%6==5))
        {
            if (n%6==0) cout<<(n/6)*15<<"\n";
            else cout<<((n/6)+1)*15<<"\n";
        } else if (n>=6&&n%6<=2)
        {
            cout<<(15*((n/6)-1))+20<<"\n";

                }else if(n>=6&&(n%6<=4)) cout<<(15*((n/6)-1))+25<<"\n";
                else cout<<15<<"\n";
    }
}