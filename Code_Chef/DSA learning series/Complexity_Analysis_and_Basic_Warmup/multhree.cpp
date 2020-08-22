#include <iostream>

using namespace std;

int main()
{
    int t;
    int d0, d1;
    long long k, acum=0, dig_miss=0;
    cin >> t;
    while (t)
    {
        cin >> k >> d0 >> d1;
        acum = d0 + d1;
        for (long long i=0; i<k-2; i++)
        {
            if (acum%10==0 || acum%10==6)
            {
                dig_miss = k - 2 - i;
                break;
            }
            else
            {
                acum += acum%10;
            }
        }
        //cout << "digitos faltando: " << dig_miss << " e acumulado: " << acum << endl;
        if (acum%10 == 6)
        {
            if (dig_miss%4==1)
            {
                acum += 6;
            }
            else if (dig_miss%4==2)
            {
                acum += 8;
            }
            else if (dig_miss%4==3)
            {
                acum += 12;
            }
            acum += 20*(dig_miss/4);
        }
        if (acum%3==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }
    return 0;
}