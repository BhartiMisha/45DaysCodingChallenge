#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int> &height)
{
    int n = height.size();
    int i = 0;
    int j = n - 1;
    int res = INT_MIN;
    int currArea;

    while (i < j)
    {
        currArea = min(height[i], height[j]) * (j - i);
        res = max(currArea, res);

        if (height[i] < height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "Max Area: " << maxArea(v);
    return 0;
}