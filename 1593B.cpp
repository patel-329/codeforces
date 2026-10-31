#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int c=0;
    long long n;
    cin>>n;

    string s;
   s=to_string(n);
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='0') 
        {
            for(int j=i-1;j>=0;j--)
            {
                if(s[j]=='0'||s[j]=='5') 
                { i=0;
                    break;
                }
                else 
                {
                    c++;
                }
            }
        } else if(s[i]=='5')
        {
            for(int k=i-1;k>=0;k--)
            {
                if(s[k]=='2'||s[k]=='7')
                {
                    i=0; break;
                } 
                else if(s[k]=='0')
                {
                    for(int m=k-1;m>=0;m--)
                    {
                        if(s[m]=='2'||s[m]=='7'||s[m]=='5'||s[m]=='0')
                        { 
                            c++;
                            i=0;
                            k=0;
                             break;
                        }
                        else
                        {
                          c++;
                        }
                    } 
                } else 
                {
                   c++;
                }
            }
        }
        else
        { 
         c++;
        }
    }
     cout<<c<<"\n";
}

}