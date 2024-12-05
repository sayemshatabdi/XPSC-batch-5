#include <bits/stdc++.h>
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
        string s;
        cin>>s;
        map<char, int> mp;
        for(int i=0;i<n;i++) 
        {
            mp[s[i]]++;
        }
        string a;
        while(!mp.empty()) 
        {
            for(auto it=mp.begin();it!=mp.end();) 
            {
                a.push_back(it->first);
                it->second--;
                if(it->second==0) 
                {
                    it = mp.erase(it);
                } 
                else 
                {
                    it++;
                }
            }
        }
        cout<<a<<endl;
    }

    return 0;
}