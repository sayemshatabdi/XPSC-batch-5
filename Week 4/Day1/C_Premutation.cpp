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
        int v[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cin>>v[i][j];
            }
        }
        vector<int>ans;
        int idx;
        for(int i=0;i<n;i++)
        {
            if(v[0][0]!=v[i][0])
            {
                if(i>(n/2))
                {
                    if(v[0][0]==v[i-1][0])
                    {
                        idx=i;
                    }
                    else
                    {
                        idx=0;
                    }
                }
                else
                {
                    if(v[0][0]==v[i+1][0])
                    {
                        idx=i;
                    }
                    else
                    {
                        idx=0;
                    }
                }
            }
       
        }
        // cout<<idx;
        if(idx>(n/2))
        {
            ans.push_back(v[idx-1][0]);
        }
        else
        {
            ans.push_back(v[idx+1][0]);
        }
        for(int i=0;i<n-1;i++)
        {
            ans.push_back(v[idx][i]);
        }
        for(int val:ans)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}