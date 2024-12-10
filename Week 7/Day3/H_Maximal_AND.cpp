#include<bits/stdc++.h>
using namespace std;
const int B=30;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,K;
        cin>>n>>K;
        vector<int>v(n+1);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int>bits(B+1);
        for(int i=0;i<n;i++)
        {
            for(int k=B;k>=0;k--)
            {
                if((v[i]>>k)&1)
                {
                    bits[k]++;
                }
            }
        }
        int ans=0;
        for(int k=B;k>=0;k--)
        {
            if(bits[k]==n)
            {
                ans+=(1LL<<k);
            }
            else
            {
                int need=n-bits[k];
                if(K>=need)
                {
                    ans+=(1LL<<k);
                    K-=need;                
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}