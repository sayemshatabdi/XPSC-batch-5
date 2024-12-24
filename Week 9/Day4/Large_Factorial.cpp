#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=1;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            ans=(1LL* ans%mod*i%mod)%mod;
        }   
        cout<<ans<<endl;
    }
    return 0;
}