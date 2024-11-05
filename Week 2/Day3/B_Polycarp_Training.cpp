#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    multiset<int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.insert(x);
    }
    int ans=0,p=1;
    while(!a.empty())
    {
        auto lb=a.lower_bound(p);
        if(lb!=a.end())
        {
            ans++;
            a.erase(lb);
        }
        else
        {
            break;
        }
        p++;
    }
    cout<<ans<<endl;
    return 0;
}