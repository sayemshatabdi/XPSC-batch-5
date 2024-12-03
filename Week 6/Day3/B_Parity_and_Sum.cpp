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
        priority_queue<int>odd1;
        priority_queue<int>odd2;
        priority_queue<int,vector<int>,greater<int>>even1;
        priority_queue<int>even2;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
            {
                even1.push(x);
                even2.push(x);
            }
            else 
            {
                odd1.push(x);
                odd2.push(x);
            }
        }
        int ans1=0,ans2=0;
        while(!even1.empty() && !odd1.empty())
        {
            int x=even1.top();
            int y=odd1.top();
            if(x<=y)
            {
                odd1.push(x+y);
                even1.pop();
                ans1++;
            }
            else
            {
                odd1.push(x+y);
                ans1++;
            }    
        }
        while(!even2.empty() && !odd2.empty())
        {
            int x=even2.top();
            int y=odd2.top();
            if(x<=y)
            {
                odd2.push(x+y);
                even2.pop();
                ans2++;
            }
            else
            {
                odd2.push(x+y);
                ans2++;
            }    
        }
        cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}