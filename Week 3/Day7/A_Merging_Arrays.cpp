#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int l=0,r=0;
    vector<int>ans;
    while(l<n && r<m)
    {
        if(a[l]<b[r])
        {
            ans.push_back(a[l]);
            l++;
            
            
        }
        else if(a[l]>b[r])
        {
            ans.push_back(b[r]);
            r++;
        }
        else if(a[l]==b[r])
        {
            ans.push_back(a[l]);
            ans.push_back(b[r]);
            r++;
            l++;
        }
    }
    // cout<<l<<" "<<r<<endl;
    if(l<n)
    {
        for(int i=l;i<n;i++)
        {
            ans.push_back(a[i]);
        }
    }
    else if(r<m)
    {
        for(int i=r;i<m;i++)
        {
            ans.push_back(b[i]);
        }
    }
    for(int val :ans)
    {
        cout<<val<<" ";
    }
    return 0;
}