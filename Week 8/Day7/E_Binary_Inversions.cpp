#include<bits/stdc++.h>
using namespace std;
int cnt(vector<int>v,int n)
{
    int res=0,one=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            one++;
        }
        else
        {
            res+=one;
        }
    }
    return res;
}
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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=cnt(v,n);
        // cout<<ans<<endl;
        int idx=-1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                v[i]=1;
                idx=i;
                break;
            }
        }
        ans=max(ans,cnt(v,n));
        if(idx!=-1)
        {
            v[idx]=0;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]==1)
            {
                v[i]=0;
                break;
            }
        }
        ans=max(ans,cnt(v,n));
        cout<<ans<<endl;
    }
    return 0;
}