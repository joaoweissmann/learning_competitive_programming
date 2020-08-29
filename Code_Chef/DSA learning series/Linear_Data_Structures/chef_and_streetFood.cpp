#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, si, vi, pi;
    vector<int> vt;
    cin >> t;
    while (t)
    {
        vt.clear();
        cin >> n;
        while (n)
        {
            cin >> si >> pi >> vi;
            vt.push_back(vi*(pi/(si+1)));
            n--;
        }
        sort(vt.begin(), vt.end(), greater<int>());
        cout << vt[0] << endl;
        
        /*for (auto const& it : vt)
        {
            cout << it << ", ";
        }
        cout << endl;*/
        
        t--;
    }
    return 0;
}