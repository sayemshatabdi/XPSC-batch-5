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
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int l=0,r=0,sum=0,ans=-1;
        while(r<n)
        {
            sum+=a[r];
            if(sum>=k)
            {
                if(sum==k)
                {
                    ans=max(ans,r-l+1);
                }
                else
                {
                    while(sum>k && l<=r)
                    {
                        sum-=a[l];
                        l++;
                    }
                }
            }
            r++;
        }
        if(ans==-1)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<n-ans<<endl;
        }
    }
    return 0;
}