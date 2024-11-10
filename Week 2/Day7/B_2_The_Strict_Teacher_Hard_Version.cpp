#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,q;
        cin>>n>>m>>q;
        set<int>v;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            v.insert(x);
        }
        while(q--)
        {
            int d;
            cin>>d;
            if(d<*v.begin())
            {
                cout<<*v.begin()-1<<endl;
            }
            else if(d>*v.rbegin())
            {
                cout<<n-*v.rbegin()<<endl;
            }
            else{
                auto a=v.lower_bound(d);
                if(a==v.end())
                {
                    a--;
                }
                auto b=a--;
                int ans=ceil((*(b)-*(a)-1)*1.0 / 2);
                cout<<ans<<endl;
            }
            
            
        }
    }
    return 0;
}