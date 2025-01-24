#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    auto ok=[&](int mid)
    {
        int cnt=1,j=0;
        for(int i=1;i<n;i++)
        {
            if(cnt==k) break;
            if(v[i]-v[j]>=mid)
            {
                cnt++;
                j=i;
            }
        }
        return cnt==k;
    };
    int l=0,r=v[n-1]-v[0],ans,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}