#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& v) {
        int l=1;
        for(int i=1;i<v.size();i++){
            if(v[i]!=v[i-1])
            {
                v[l]=v[i];
                l++;
            }
        }
         return l;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n ; i++)
    {
        cin >> v[i];
    }

    int c = removeDuplicates(v);
    cout << "Duplicates count: " << n- c << endl;
    cout << "elements: " ;
    for(int i = 0; i < c; i++)
    {
        cout << v[i] << " ";
    }

}
