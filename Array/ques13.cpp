#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int size = nums.size();
    for (int i = 0; i < size - 2 && nums[i] <= 0; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int j = i + 1;
        int k = size - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum == 0)
            {
                result.push_back({nums[i], nums[j], nums[k]});

                while (j < k && nums[k] == nums[k - 1])
                    k--;
                while (j < k && nums[j] == nums[j + 1])
                    j++;

                k--;
                j++;
            }
            else if (sum < 0)
                j++;
            else
                k--;
        }
    }
    return result;
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

    vector<vector<int>> res = threeSum(v);
    for(int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }


}