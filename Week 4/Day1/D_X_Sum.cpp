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
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int ans=INT_MIN,sum=0,x,y;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                sum+=a[i][j];
                x=j-1;
                y=j+1;
                for(int k=i+1;k<n;k++)
                {
                    if(x>=0)
                    {
                        sum+=a[k][x];
                        x--;
                    }
                    if(y<m)
                    {
                        sum+=a[k][y];
                        y++;
                    }
                }
                x=j-1;
                y=j+1;
                for(int k=i-1;k>=0;k--)
                {
                    if(x>=0)
                    {
                        sum+=a[k][x];
                        x--;
                    }
                    if(y<m)
                    {
                        sum+=a[k][y];
                        y++;
                    }
                }
                ans=max(sum,ans);
                sum=0;
            }
            // cout<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}