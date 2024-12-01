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
        vector<int>v(n);
        int cnt0=0,cnt1=0,bigger=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==0)
            {
                cnt0++;
            }
            else if(v[i]==1)
            {
                cnt1++;
            }
            else
            {
                bigger++;
            }
        }
        if(cnt0>(n-cnt0)+1)
        {
            if(cnt1==0)
            {
                cout<<"1"<<endl;
            }
            else
            {
                if(bigger>0)
                {
                    cout<<"1"<<endl;
                }
                else
                {
                    cout<<"2"<<endl;
                }
            }
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    
    return 0;
}