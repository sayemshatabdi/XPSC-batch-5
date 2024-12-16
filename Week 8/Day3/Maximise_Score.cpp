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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int diff=INT_MIN;
            if(i>0)
            {
                diff=max(diff,abs(v[i]-v[i-1]));
            }
            if(i<n-1) 
            {
                diff=max(diff,abs(v[i]-v[i+1]));
            }
            ans=min(ans,diff);
        }
        cout<<ans<<endl;
    }
    return 0;
}