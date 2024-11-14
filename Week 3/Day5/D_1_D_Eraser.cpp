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
        int l=0,r=0,ans=0;
        while(r<n)
        {
            if(s[r]=='B')
            {
                ans++;
                l+=k;
                r+=k;
            }
            else
            {
                l++;
                r++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}