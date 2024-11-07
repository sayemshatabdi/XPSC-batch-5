#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,cus=1;
    cin>>n;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ms;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int money;
            cin>>money;
            s.insert({cus,money});
            ms.insert({money,-cus});
            cus++;
        }   
        else if(type==2)
        {
            int pos=s.begin()->first,mon=s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ms.erase({mon,-pos});
        }  
        else
        {
            int pos=-ms.rbegin()->second,mon=ms.rbegin()->first;
            ans.push_back(pos);
            ms.erase(--ms.end());
            s.erase({pos,mon});
        }   
    }
    for(int v:ans)
    {
        cout<<v<<" ";
    }
    return 0;
}