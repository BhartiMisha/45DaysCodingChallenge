#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
        int left = 0;
        for(int right = 0; right < nums.size(); right++)
        {
            if(nums[right] != 0)
            {
                swap(nums[right], nums[left]);
                left++;
            }
        }
    }

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < v.size(); i++ )
    {
        cin >> v[i];
    }

    cout << "Before: " ;
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    moveZeroes(v);
    cout << "\nAfter: " ;
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

}
