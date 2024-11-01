#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    map<string,int>ans;
    while(t--)
    {
        string s;
        cin>>s;
        if(ans[s]==0)
        {
            cout<<"OK"<<endl;
            ans[s]=1;
        }
        else
        {
            cout<<s<<ans[s]<<endl;
            ans[s]+=1;
        }
    }

    return 0;
}