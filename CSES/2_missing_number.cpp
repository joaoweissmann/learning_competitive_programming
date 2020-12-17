#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, el;
    set <int> s;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        s.insert(i+1);
    }
    
    /*
    for (auto const& it : s)
    {
        cout << it << ", ";
    }
    cout << "\n";
    */

    for (int i=0; i<n-1; i++)
    {
        cin >> el;
        s.erase(el);
    }

    for (auto const& it : s)
    {
        cout << it;
    }
    //cout << "\n";
    
    return 0;
}