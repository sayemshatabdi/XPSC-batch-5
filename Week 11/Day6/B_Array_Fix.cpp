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
        vector<int>a(n),b;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int idx=-1;
        for(int i=n-1;i>=1;i--)
        {
            if(a[i]<a[i-1])
            {
                idx=i-1;
                break;
            }
        }
        if(idx!=-1)
        {
            for(int i=0;i<=idx;i++)
            {
                if(a[i]>9)
                {
                    b.push_back(a[i]/10);
                    b.push_back(a[i]%10);
                }
                else b.push_back(a[i]);
            }
            for(int i=idx+1;i<n;i++)
            {
                b.push_back(a[i]);
            }
            bool flag=true;
            for(int i=0;i<b.size()-1;i++)
            {
                if(b[i]>b[i+1]) 
                {
                    flag=false;
                }
            }
            
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}