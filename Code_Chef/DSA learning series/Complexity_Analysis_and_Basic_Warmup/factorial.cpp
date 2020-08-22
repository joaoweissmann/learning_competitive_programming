#include <iostream>

using namespace std;

int main()
{
    int t, n, ans;
    cin >> t;
    while (t)
    {
        cin >> n;
        ans = 0;
        
        while (n/5)
        {
            ans += n / 5;
            n = n / 5;
        }

        cout << ans << endl;
        t--;
    }
    return 0;
}