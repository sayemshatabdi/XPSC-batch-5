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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int dif=INT_MAX;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(b[i]>a[i])
            {
                flag=false;
                break;
            }
            if(b[i]!=0)
            {
                dif=min(dif,a[i]-b[i]);
            }
        }
        if(flag)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]-b[i]>dif || (b[i]==0 && a[i]-b[i]>dif))
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}