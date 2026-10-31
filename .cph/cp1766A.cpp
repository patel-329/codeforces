#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
      long long n,a=0,b=0;
        cin>>n;
       
        while (n)
        {
            if(n<=9) b=n;
            n=n/10;
                a++;
                
        }
        
       cout<<9*(a-1)+ b<<"\n";
       
    }
}