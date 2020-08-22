#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n, elem, ans, max_speed;
    vector<int> v;

    cin >> t;
    while (t)
    {
        cin >> n;
        v.clear();
        for (int i=0; i<n; i++)
        {
            cin >> elem;
            v.push_back(elem);
        }

        /*
        for (auto const& it : v)
        {
            cout << it << ", ";
        }
        cout << endl;
        */
        
        ans = 1;
        max_speed = v[0];
        for (int i=1; i<n; i++)
        {
            if (v[i] <= min(v[i-1], max_speed) )
            {
                ans++;
            } else
            {
                max_speed = min(max_speed, v[i-1]);
            }
        }

        cout << ans << endl;

        t--;
    }
    return 0;
}