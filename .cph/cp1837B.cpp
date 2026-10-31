#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,a=0,b=0; // a=='<' and b==">"
        cin>>n;
        string s;
        cin>>s;
         for(int i=0;i<n;i++)
    {
        if(s[i]=='<') 
        {
            if(b>1) b--;
        }
    }
    }
   
}