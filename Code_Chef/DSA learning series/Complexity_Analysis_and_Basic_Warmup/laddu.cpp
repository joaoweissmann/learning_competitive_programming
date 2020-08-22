#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, n, rank, severity, pts, ans;
    string origin, activitie;
    
    cin >> t;
    while (t)
    {
        cin >> n;
        cin >> origin;
        pts = 0;
        while (n)
        {
            cin >> activitie;
            if (activitie == "CONTEST_WON")
            {
                cin >> rank;
                pts += 300 + max(0, 20-rank);
            }
            else if (activitie == "TOP_CONTRIBUTOR")
            {
                pts += 300;
            }
            else if (activitie == "BUG_FOUND")
            {
                cin >> severity;
                pts += severity;
            }
            else if (activitie == "CONTEST_HOSTED")
            {
                pts += 50;
            }
            n--;
        }
        if (origin=="INDIAN")
        {
            ans = pts/200;
        }
        else
        {
            ans = pts/400;
        }
        
        cout << ans << endl;
        t--;
    }
    return 0;
}