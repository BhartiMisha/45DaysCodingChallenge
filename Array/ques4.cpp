#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>> &v)
{
    bool set = true;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i][0] == 0)
            set = false;
        for (int j = 1; j < v[i].size(); j++)
        {
            if (v[i][j] == 0)
            {
                v[0][j] = 0;
                v[i][0] = 0;
            }
        }
    }

    int rows = v.size();
    int cols = v[0].size();

    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 1; j--)
        {
            if (v[i][0] == 0 || v[0][j] == 0)
            {
                v[i][j] = 0;
            }
        }
        if (set == false)
            v[i][0] = 0;
    }
}

int main()
{
    int n,m;
    cout << "Enter rows and cols respectively: " << endl;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    setZeroes(v);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}