#include<iostream>
#include<vector>
using namespace std;

void sort_colors(vector<int>& v)
{
    int zero = 0, one = 0, two;
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == 0)
        {
            zero++;
        }
        else if(v[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    int i = 0;
    for(; i < zero; i++)
    {
        v[i] = 0;
    }
    for(; i < zero + one ; i++)
    {
        v[i] = 1;
    }

    for(; i < v.size(); i++)
    {
        v[i] = 2;
    }

    

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

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    sort_colors(v);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}