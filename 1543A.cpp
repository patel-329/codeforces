#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a==0) cout<<b<<" "<<0<<endl;
        else if(b==0)cout<<a<<" "<<0<<endl;
       else if(a>=b)
        {
            if(a/b>=2)
            {
                cout<<a-b<<" ";
                if((a-(2*b))>=b) cout<<b<<endl;
                else cout<<(a-(2*b))<<endl;
            } else if(a>b)
            {
                cout<<a-b<<" ";
                if(b%(a-b)<=((a-b)/2)) cout<<b%(a-b)<<endl;
                else cout<<(a-b)-(b%(a-b))<<endl;
            } else cout<<0<<" "<<0<<endl;
        } else
        {
             long long temp=b;
             b=a;
             a=temp;

            if(a/b>=2)
            {
                cout<<a-b<<" ";
                if((a-(2*b))>=b) cout<<b<<endl;
                else cout<<(a-(2*b))<<endl;
            } else if(a>b)
            {
                cout<<a-b<<" ";
                if((b%(a-b))<=((a-b)/2)) cout<<b%(a-b)<<endl;
                else cout<<(a-b)-(b%(a-b))<<endl;
            }
        }
        
    }
}