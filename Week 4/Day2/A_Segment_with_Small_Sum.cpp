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
    int l=0,r=0,sum=0,ans=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum<=k)
        {
            ans=max(ans,(r-l+1));
        }
        else
        {
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}