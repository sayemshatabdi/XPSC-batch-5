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
        string s1;
        cin>>s1;
        set<int>s;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        string s2;
        cin>>s2;
        sort(s2.begin(),s2.end());
        vector<int>v(s.begin(),s.end());
        for(int i=0;i<v.size();i++)
        {
            s1[v[i]-1]=s2[i];
        }
        cout<<s1<<endl;
    }
    return 0;
}