#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    int sum = 0, ans = 0;
    mp[sum] = 1;
    for (auto it : nums)
    {
        sum += it;
        int find = sum - k;
        if (mp.find(find) != mp.end())
        {
            ans += mp[find];
        }
        mp[sum]++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[n];
    }

    int k;
    cin >> k;
    cout << "Total count: " << subarraySum(v, k);
}