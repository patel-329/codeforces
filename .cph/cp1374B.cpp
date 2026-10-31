#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        long long n,c=0,d=0;
        cin>>n;
        while(n)
        {
            if(n%6==0)
            {
                n=n/6;
                    c++;
            } else if(n%3==0)
            {
                n=n/3;
                    d++;
            } else{
                break;
            }
        }
        if(n==1)
        {
            cout<<(c+(2*d))<<"\n";
        } else cout<<-1<<"\n";
    }
}