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
        int n;
        cin>>n;
        vector<int>v(n);
        vector<long long>sum(n);
        long long su=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            su+=v[i];
            sum[i]=su;
        }
        string s;
        cin>>s;
        long long l=0,r=n-1,ans=0;
        while(l<r)
        {
            if(s[l]=='L' && s[r]=='R')
            {
                if(l==0)
                {
                    ans+=sum[r];
                }
                else
                {
                    ans+=sum[r]-sum[l-1];
                }
                l++;
                r--;
            }
            else if(s[l]=='L' && s[r]=='L')
            {
                r--;
            }
            else if(s[r]=='R' && s[l]=='R')
            {
                l++;
            }
            else if(s[l]=='R' && s[r]=='L')
            {
                l++;
                r--;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}