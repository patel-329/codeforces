#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int c=0,m=0,p=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]-'0'==0) c++;
        
        }
        int d=s.size()-c;
        if(c==d) cout<<0<<"\n";
        for(int i=s.size()-1;i>=0;i--)
        {
            if(c>d)
            {
                if(s[i]-'0'==0)
                {
                    p++;
                    if(p==(c-d))
                    {
                        cout<<s.size()-i<<"\n";
                        break;
                    }
                }
              } else if (c<d)
                {
                    if(s[i]-'0'==1)
                   {
                     m++;
                    if(m==(d-c))
                    {
                        cout<<s.size()-i<<"\n";
                        break;
                    }
                }
                } 
            
        }
    }
}