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
        vector<int>v;
        int l=1,r=(n*n);
        
        for(int i=0;i<n*n;i++)
        {
            if(i%2==0)
            {
                v.push_back(l);
                l++;
            }
            else
            {
                v.push_back(r);
                r--;
            }
        }
        // for(int va:v)
        // {
        //     cout<<va<<" ";
        // }
        int x=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                for(int j=x;j<x+n;j++)
                {
                    cout<<v[j]<<" ";
                }
                cout<<endl;
                x+=n;
            }
            else
            {
                for(int j=(n+x)-1;j>=x;j--)
                {
                    cout<<v[j]<<" ";
                }
                cout<<endl;
                x+=n;
            }
        }
        // cout<<endl;
    }
    return 0;
}