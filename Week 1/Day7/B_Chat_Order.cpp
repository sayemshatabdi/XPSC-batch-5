#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int val=n;
    map<string,bool>mp;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(mp[v[i]]==false)
        {
            mp[v[i]]=true;
            cout<<v[i]<<endl;
        }
        // else
        // {
        //     mp[v[i]]=true;
        // }
    }
    return 0;
}