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
        vector<long long>a(n),b(m);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        vector<bool>flag(m+1,false);
        for(int i=0;i<m;i++)
        {
            if(!flag[i])
            {
                flag[i]=true;
                long long x=pow(2,b[i]);
                for(int j=0;j<n;j++)
                {
                    if(a[j]%x==0)
                    {
                        a[j]+=pow(2,(b[i]-1));
                    }
                }
            }
            
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}