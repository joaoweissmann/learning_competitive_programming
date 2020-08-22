#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main()
{
    int tests, meio, tamanho;
    string s;
    map<char, int> m_esq, m_dir;
    set<char> s_esq, s_dir;
    bool set_comp, map_comp;

    cin >> tests;
    
    while (tests)
    {
        // reseting variables
        set_comp = true;
        map_comp = true;
        s_dir.clear();
        s_esq.clear();
        m_dir.clear();
        m_esq.clear();
        
        cin >> s;
        tamanho = s.length();
        meio = s.length() / 2 ;
        
        // building maps
        for (int i=0; i<meio; i++)
        {
            s_esq.insert(s[i]);
            s_dir.insert(s[tamanho-(i+1)]);

            if (m_esq.find(s[i]) == m_esq.end())
            {
                m_esq[s[i]] = 1;
            }
            if (m_esq.find(s[i]) != m_esq.end())
            {
                m_esq[s[i]]++;
            }

            if (m_dir.find(s[tamanho-(i+1)]) == m_dir.end())
            {
                m_dir[s[tamanho-(i+1)]] = 1;
            }
            if (m_dir.find(s[tamanho-(i+1)]) != m_dir.end())
            {
                m_dir[s[tamanho-(i+1)]]++;
            }
        }

        /*
        // printing maps
        cout << "mapa da esquerda é: ";
        for (auto const& it : m_dir)
        {
            cout << it.first << ":" << it.second << " ";
        }
        cout << endl;
        cout << "mapa da direita é: ";
        for (auto const& it : m_esq)
        {
            cout << it.first << ":" << it.second << " ";
        }
        cout << endl;
        */

        // comparing maps
        for (auto const& it : m_dir)
        {
            if (m_esq[it.first] != m_dir[it.first])
            {
                map_comp = false;
                break;
            }
        }
        
        // output answer based on map compare
        if (map_comp)
        {
            cout << "YES" ;
        } else
        {
            cout << "NO" ;
        }
        cout << endl;

        tests--;
    }
    return 0;
}