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
        string s;
        cin>>s;
        int l=0,r=0,ans=INT_MAX,cnt=0;
        while(r<n)
        {
            if(s[r]=='W')
            {
                cnt++;
                // cout<<cnt<<endl;;
            }
            if(r-l+1==k)
            {
                ans=min(ans,cnt);
                // cnt=0;
                if(s[l]=='W')
                {
                    cnt--;
                }
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}