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
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            ans|=v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}