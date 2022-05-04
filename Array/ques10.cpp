#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int subarraysDivByK(vector<int> &nums, int k)
{
    int divisibleCount = 0;
    unordered_map<int, int> m;
    m.insert(make_pair(0, 1));

    int sum = 0;
    int rem = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        rem = sum % k;

        if (rem < 0)
        {
            rem += k;
        }

        if (m.find(rem) != m.end())
        {
            divisibleCount += m[rem];
            m[rem]++;
        }
        else
        {
            m.insert(make_pair(rem, 1));
        }
    }
    return divisibleCount;
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
    int k;
    cin >> k;

    cout << "Total count: " << subarraysDivByK(v, k);
}