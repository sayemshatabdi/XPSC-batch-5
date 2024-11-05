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
        int n,q;
        cin>>n>>q;
        map<int,set<int>>mp;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            if(mp.find(l)==mp.end() || mp.find(r)==mp.end())
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int start=*mp[l].begin();
                int end=*mp[r].rbegin();
                if(start<end) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}