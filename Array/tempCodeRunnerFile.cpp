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