#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tests, tamanho, ind;
    string n;

    cin >> tests;
    
    while(tests){
        cin >> n;
        tamanho = n.length();
        ind = 0;
        for (int i=0; i<tamanho; i++)
        {
            if (n[tamanho-(i+1)] != '0' || ind == 1)
            {
                cout << n[tamanho-(i+1)];
                ind = 1;
            }
        }
        
        cout << endl;
        tests--;
    }
    
    return 0;
}