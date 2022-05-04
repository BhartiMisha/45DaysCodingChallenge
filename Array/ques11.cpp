#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


vector<int> findDuplicates(vector<int>& v)
{
    unordered_map<int, int> m;
    vector<int> res;

    for(int i = 0; i < v.size(); i++)
    {
        if(m.find(v[i]) != m.end())
        {
            res.push_back(v[i]);
        }
        else
        {
            m.insert(make_pair(v[i], 1));
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n ; i++)
    {
        cin >> v[i];
    }

    vector<int> res = findDuplicates(v);

    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}