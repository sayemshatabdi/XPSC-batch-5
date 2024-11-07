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
        string s;
        cin>>s;
        if(s.size()==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            map<char,int>mp;
            if(n%2==0)
            {
                int cnt_1=0,cnt_2=0;
                for(int i=0;i<n;i++)
                {
                    mp[s[i]]++;
                }
               for(auto[x,y] :mp )
                {
                    if(y%2!=0) cnt_1++;
                }
                if(cnt_1-1<=k) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else
            {
                int cnt_1=0;
                for(int i=0;i<n;i++)
                {
                    mp[s[i]]++;
                }
                for(auto[x,y] :mp )
                {
                    if(y%2!=0) cnt_1++;
                }
                if(cnt_1-1<=k) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}