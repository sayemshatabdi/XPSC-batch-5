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
        string s,ans=("Timur");
        cin>>s;
        map<char,int>m1,m2;
        for(int i=0;i<n;i++)
        {
            m1[s[i]]++;
        }
        for(int i=0;i<ans.size();i++)
        {
            m2[ans[i]]++;
        }
        bool flag=true;
        if(s.size()>5 || s.size()<5)
        {
            flag=false;
        }
        else
        {
            for(int i=0;i<5;i++)
            {
                auto it=m1.find(ans[i]);
                if(it==m1.end())
                {
                    flag=false;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}