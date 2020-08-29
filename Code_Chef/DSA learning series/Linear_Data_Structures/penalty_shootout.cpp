#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, n, apts, bpts, ans, na, nb;
    string st;
    cin >> t;
    while (t)
    {
        cin >> n;
        na = n;
        nb = n;
        cin >> st;
        apts = 0;
        bpts = 0;
        ans = 0;
        for (int i=0; i<st.size(); i++)
        {
            if (i%2==0)
            {
                if (st[i]=='1')
                {
                    apts++;
                }
                na--;
            }
            else
            {
                if (st[i]=='1')
                {
                    bpts++;
                }
                nb--;
            }
            
            if (apts>bpts+nb || bpts>apts+na)
            {
                ans = i+1;
                break;
            }
            else
            {
                ans = i+1;
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}