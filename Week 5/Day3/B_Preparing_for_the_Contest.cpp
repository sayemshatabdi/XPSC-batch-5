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
        vector<int>v(n),ans;
        for(int i=0;i<n;i++)
        {
            v[i]=i+1;
        }
        if(k==n-1)
        {
            for(int i=0;i<n;i++)
            {
                cout<<v[i];
            }
        }
        else if(k==0)
        {
            reverse(v.begin(),v.end());
            for(int i=0;i<n;i++)
            {
                cout<<v[i];
            }
        }
        else
        {
            for(int i=1;i<=k;i++)
            {
                ans.push_back(i);
            }
            for(int i=n;i>k;i--)
            {
                ans.push_back(i);
            }
            for(int a :ans)
            {
                cout<<a<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}