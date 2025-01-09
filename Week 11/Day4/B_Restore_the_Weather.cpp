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
        vector<pair<int,int>>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a.begin(),a.end());
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b.begin(),b.end());
    
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[a[i].second]=b[i];
        }
        for(auto q:ans)
        {
            cout<<q<<" ";
        }
        cout<<endl;
    }
    return 0;
}