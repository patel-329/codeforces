#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p=0,m=0,q=0,g=0;
        string s;
        cin>>s;
       
          if(s.size()==2 ) cout<<"NO"<<"\n";
          else{
            if (s[1]==')' || s[s.size()-2]=='(') cout<<"yes"<<"\n";
            else
            {
                for(int i=0;i<s.size();i++)
                {
                    if(i<(s.size()/2))
                    {
                        if(s[i]==')') p++;
                        else m++;
                    }  else
                    {
                        if(s[i]=='(') q++;
                        else g++;
                    }
                }
                if((m-p>1) || (g-q>1)) cout<<"no"<<"\n";
                else cout<<"yes"<<"\n";
            }
          }
    }        
}