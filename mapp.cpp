#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "key";
    m[2] = "value";
    m[3] = "Pair";
    for (auto &p : m)
    {
        cout << p.first << "->" << p.second << endl; 
    }
    auto pr = m.find(2);
    cout << (*pr).second<<endl;
    // Given N String,print unique string in lexiographical order
    map<string, int> mp;
    vector<string> v = {"abc", "bcd", "efd", "abc", "bcd"};
    for (auto val : v)
    {
        if (mp[val])
        {
            mp[val]++;
        }
        else
        {
            mp[val] = 1;
        }
    }
    for (auto &it : mp)
    {
        cout << (it).first << " ->"<<(it).second<<endl;
    }
}