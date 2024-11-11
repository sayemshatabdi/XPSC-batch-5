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
    int cnt=0;
    while(r<m)
    {
        if(l<n && a[l]<b[r])
        {
            cnt++;
            l++;
            // ans.push_back(cnt);
        }
        else
        {
            cout<<cnt<<" ";
            r++;
        }
    }
    return 0;
}