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
        long long a,b;
        cin>>a>>b;
        long long ans=INT_MAX;
        for(int i=1;i<=max(a,b);i++)
        {
            ans=min(ans,((a^i)+(b^i)));
        }
        cout<<ans<<endl;
    }
    return 0;
}