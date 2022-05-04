#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int>& nums)
{
    int MaxProfit = 0;
    int prevProfitLoss = 0;
    for(int i = 0; i < nums.size() - 1; i++)
    {
        if(nums[i] < nums[i + 1])
        {
            MaxProfit += nums[i + 1] - nums[i];
        }
    }
    return MaxProfit;
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

    cout << "Maximum profit = " << maxProfit(v);
}