#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,c=0,p=0;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            if(a==1)
            {
                c++;
            }
            else{
                p++;
            }
        }
        if(c-p>=0)
        {
            if(p%2==0)
            {
                cout<<0<<"\n";
            }else cout<<1<<"\n";
        }else
        {
            if(c-p>=0)
            {
                if(p%2==0) cout<<0<<"\n";
                else cout<<1<<"\n";
            }
            else
            {
                if((p-c)%2==0 &&p%2!=0)
                {
                    if(((p-c)/2)%2!=0) cout<<(p-c)/2<<"\n";
                    else cout<<((p-c)/2)+1<<"\n";
                } else if ((p-c)%2==0 &&p%2==0)
                {
                    if(((p-c)/2)%2==0) cout<<(p-c)/2<<"\n";
                    else cout<<((p-c)/2)+1<<"\n";
                } else if((p-c)%2!=0 &&p%2==0)
                {
                     if(((p-c)/2)%2!=0) cout<<((p-c)/2)+1<<"\n";
                    else cout<<((p-c)/2)+2<<"\n";
                } else
                {
                     if(((p-c)/2)%2==0) cout<<((p-c)/2)+1<<"\n";
                    else cout<<((p-c)/2)+2<<"\n";
                }
            }
        }

    }
}