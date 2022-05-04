//using sliding window protocol
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int Minimum_difference(vector<int>& v, int childCount)
{
    if(v.size() == 0)
    {
        return 0;
    }
    if(childCount > v.size())
    {
        return -1;
    }
    sort(v.begin(), v.end());
    int minDiff = INT32_MAX;

    for(int i = 0; i + childCount - 1 < v.size() ; i++)
    {
        int diff = v[i + childCount - 1] - v[i];
        if(minDiff > diff)
        {
            minDiff = diff;
        }
    }
    return minDiff;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i< n; i++)
    {
        cin >> v[i];
    }

    int childCount;
    cin >> childCount;

    cout << "Minimum difference: " << Minimum_difference(v, childCount);


}