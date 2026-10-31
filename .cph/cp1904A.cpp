 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        long long a,b,xk,yk,xq,yq;
        int v=0;
        cin>>a>>b;
        cin>>xk>>yk;
        cin>>xq>>yq;
       set<pair<long long ,long long>> stk;
        set<pair<long long ,long long>> stq;
        stk={{(xk-a ),(yk+b)},{(xk-a),(yk-b)},{(xk+a),(yk-b)},{(xk+a),(yk+b)},{(xk+b),(yk+a)},{(xk+b),(yk-a)},{(xk-b),(yk-a)},{(xk-b),(yk+a)}};
        stq={{(xq-a),(yq+b)},{(xq-a),(yq-b)},{(xq+a),(yq-b)},{(xq+a),(yq+b)},{(xq+b),(yq+a)},{(xq+b),(yq-a)},{(xq-b),(yq-a)},{(xq-b),(yq+a)}};
        for(auto p: stk)
        {
            for(auto q:stq)
            {
                if((p.first==q.first) &&(p.second==q.second))
                {
                    v++;
                }
            }
        }
        cout<<v<<"\n";
    }
}