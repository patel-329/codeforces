#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        int c=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]-'0'==0) c++;
        }
        int p= s.size()-c;
        if(((c>=p) && p%2==0)||((c<p) && c%2==0)) cout<<"NET"<<"\n";
        else cout<<"DA"<<"\n";
    }}
