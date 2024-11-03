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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int c;
            string s;
            cin>>c>>s;
            for(int j=0;j<c;j++)
            {
                if(s[j]=='D')
                {
                    a[i]++;
                    if(a[i]>9) a[i]=a[i]-10;
                }
                if(s[j]=='U')
                {
                    a[i]--;
                    if(a[i]<0) a[i]=a[i]+10;
                }
                // cout<<s[j]<<" "<<a[i]<<endl;
            } 
            // cout<<endl;
        }
        // for(int b:a)
        // {
        //     if(b>9)
        //     {
        //         cout<<b-9<<" ";
        //     }
        //     else if(b<0)
        //     {
        //         cout<<b+9<<" ";
        //     }
        //     else
        //     {
        //         cout<<b<<" ";
        //     }
        // }
        for(int x:a)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}