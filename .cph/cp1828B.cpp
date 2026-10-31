#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,a=1;
        cin>>n;
        vector<int>v;
        vector<int>srt;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            v.push_back(p);
            if(abs(p-(i+1))>0)  srt .push_back(abs(p-(i+1)));
        }
    int c=__gcd(srt[0],srt[1]);
   
       for (int i=0;i<srt.size();i++)
       {
         a= __gcd(srt[i],c);
         c=a;

       }
       
        cout<<c<<"\n";
    }
}