#include<bits/stdc++.h>
using namespace std;
long long sum(long long l,long long r,long long k) 
{
    return (r*(r+1)/2)-((l*(l-1))/2)+((r-l+1)*k);
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
        long long l=0,r=n-1;
        long long ans=INT_MAX;
        while(l<=r) 
        {
            long long mid=l+(r-l)/2;
            long long x=sum(0,mid,k);
            long long y=sum(mid+1,n-1,k);
            if(x==y) 
            {
                ans=0;
                break;
            }
            if(x<y)
            {
                l=mid+1;
            } 
            else 
            {
                r= mid - 1;
            }
            ans=min(ans,abs(x-y));
        }
        cout<<ans<<endl;
    }
    return 0;
}
