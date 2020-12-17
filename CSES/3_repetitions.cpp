#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int count, best;
    string s;
    char prev;

    cin >> s;
    
    if (s.size() == 0)
    {
        cout << 0;
        return 0;
    }
    
    prev = s[0];
    count = 1;
    best = 1;
    for (int i=1; i<s.size(); i++)
    {
        if (s[i] == prev)
        {
            count++;
            if (count > best)
            {
                best = count;
            }
        }
        else
        {
            count = 1;
            prev = s[i];
        }
    }
    cout << best;
    return 0;
}