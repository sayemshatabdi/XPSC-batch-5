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
        priority_queue<int>pq;
        for(int i=n;i>0;i--)
        {
            pq.push(i);
        }
        int a,b,c;
        cout<<"2"<<endl;
        while(pq.size()>1)
        {
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            cout<<a<<" "<<b<<endl;
            c=ceil((a+b)*1.0/2);
            pq.push(c);
        }
    }
    return 0;
}
