#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n),x(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        x[i]=v[i];
    }
    sort(x.begin(),x.end());
    if(v==x)
    {
        cout<<"YES"<<endl;
        return;
    }
    int cnt=0;
    if(v[0]<v[n-1])
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            cnt++;
        }
    }
    if(cnt==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    else 
    {
        cout<<"NO"<<endl;
        return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}