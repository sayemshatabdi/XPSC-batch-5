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
        int n;
        cin>>n;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            if(abs(x-i)!=0)
            {
                ans=__gcd(ans,abs(x-i));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}