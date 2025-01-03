#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(q--)
    {
        int x;
        cin>>x;
        int l=0,r=n-1,mid,ans=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]<=x)
            {
                ans=mid+1;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(x<a[0]) cout<<0<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}