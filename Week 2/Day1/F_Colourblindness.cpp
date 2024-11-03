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
        string a,b;
        cin>>a;
        cin>>b;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i]=='G' && b[i]=='B')
                {
                    continue;
                }
                else if(b[i]=='G' && a[i]=='B')
                {
                    continue;
                }
                else
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;;
    }
    return 0;
}