#include<bits/stdc++.h>
using namespace std;
long long water(long long n,long long k,vector<long long>v,long long mid)
{
    long long x=0;
    for(long long i=0;i<n;i++)
    {
        long long q=mid-v[i];
        if(q>=0)
        {
            x+=q;
        }
    }
    return x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long>v(n);
        for(long long i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long l=1,r=1e11,ans,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            long long x=water(n,k,v,mid);
            if(x<=k)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(v.size()==1)
        {
            cout<<v[0]+k<<endl;
        }
        else cout<<ans<<endl;
    }
    return 0;
}