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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        bool flag=true;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                int tmp=abs(v[i]-(i+1));
                if(tmp%k!=0)
                {
                    cnt++;
                }
            }
            if(cnt>2) cout<<"-1"<<endl;
            else if(cnt==2) cout<<"1"<<endl;
            else cout<<"0"<<endl;
        }

    }
    return 0;
}