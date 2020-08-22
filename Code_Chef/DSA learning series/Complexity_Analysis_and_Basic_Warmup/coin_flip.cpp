#include <iostream>

using namespace std;

int main()
{
    int t, g, i, n, q, fliped, flipno;
    cin >> t;
    while (t)
    {
        cin >> g;
        while (g)
        {
            cin >> i >> n >> q;
            //cout << i << n << q << endl;
            if (n%2==0)
            {
                fliped = n/2;
                flipno = n/2;
            } else
            {
                fliped = n/2 + 1;
                flipno = n/2;
            }
            if ( (i==1 && q==2) || (i==2 && q==1))
            {
                cout << fliped << endl;
            } else
            {
                cout << flipno << endl;
            }
            g--;
        }
        t--;
    }
    return 0;
}