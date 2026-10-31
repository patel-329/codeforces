#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    
    cin>>t;
    while(t--)
    {
        int n,ch=0,odd=0;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            if(a%2!=0) odd++;
            if(a%4==0) ch++;
        }
        int m= max(odd,ch);
        int c= v.size()-(odd+ch);
        int p= max(m,c);
        cout<<p<<"\n";
    }
}