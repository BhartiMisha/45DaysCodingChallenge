#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

void countDuplicates(string& s)
{
    unordered_map<char, int> m;
    for(auto it: s)
    {
        m[it]++;
    }

    for(auto it: m)
    {
        if(it.second > 1)
        {
            cout << it.first << " " << it.second << endl;
        }
    }
}
int main()
{
    string s;
    getline(cin, s);

    cout << s << endl;

    countDuplicates(s);

}