#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long l=0,r=0,ans=INT_MAX,sum=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum>=k)
        {
            ans=min(ans,(r-l+1));
            while(sum>=k && l<=r)
            {
                sum-=v[l];
                l++;
                if(sum>=k)
                {
                    ans=min(ans,(r-l+1));
                }
            }
            
        }
        r++;
    }
    if(ans==INT_MAX) cout<<"-1";
    else cout<<ans;
    return 0;
}