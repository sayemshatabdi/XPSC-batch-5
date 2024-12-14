#include<bits/stdc++.h>
using namespace std;
int countOne(int n) {
    int c = 0;
    while (n != 0) {
        n = n & (n - 1);
        c++;
    }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, k;
    cin >> n >> m >> k; // Read the type of soldiers, number of soldiers, and max value of x to be Fedor's friend

    vector<int> soldiers(m + 1); // Array to store the army of every player
    for (int i = 0; i <= m; i++) {
        cin >> soldiers[i];
    }

    int count = 0; // Number of Fedor's friends
    for (int i = 0; i < m; i++) {
        int res = soldiers[i] ^ soldiers[m]; // XOR with Fedor's army
        if (countOne(res) <= k) {
            count++;
        }
    }

    cout << count << endl; // Output the number of friends

    return 0;
}