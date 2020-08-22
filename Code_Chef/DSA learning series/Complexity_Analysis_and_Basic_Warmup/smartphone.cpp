#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{
    int tests;
    ll elem, best_val, curr_val;
    vector<ll> v;

    cin >> tests;
    while(tests)
    {
        cin >> elem;
        v.push_back(elem);
        tests--;
    }

    /*
    for (auto const& it : v)
    {
        cout << it << ", " ;
    }
    cout << endl;
    */

    sort(v.begin(), v.end());

    /*for (auto const& it : v)
    {
        cout << it << ", " ;
    }
    cout << endl;*/

    // linear scan to optimze
    best_val = 0;
    for (int i=0; i<v.size(); i++)
    {
        curr_val = v[i]*(v.size()-i);
        if (curr_val > best_val)
        {
            best_val = curr_val;
        }
    }
    cout << best_val << endl;
    return 0;
}
