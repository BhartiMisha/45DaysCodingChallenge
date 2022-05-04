#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& v, int target)
{
    unordered_map<int, int> m;
    vector<int> res;

    for(int i = 0; i < v.size(); i++)
    {
        int complement = target - v[i];
        if(m.find(complement) != m.end())
        {
            res.push_back(m[complement]);
            res.push_back(i);
            break;
        }
        else
        {
            m.insert(make_pair(v[i], i));
        }
    }
    return res;
}


int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int toAdd;
    cin >> toAdd;

    vector<int> res = twoSum(v, toAdd);
    for(int i = 0; i < res.size() ; i++)
    {
        cout << res[i] << " ";
    }
}