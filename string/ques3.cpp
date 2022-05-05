#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle)
{
    if (haystack.size() == 0)
    {
        return 0;
    }

    int needleSize = needle.size();
    int res = -1;
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle[0])
        {
            if (haystack.substr(i, needleSize) == needle)
            {
                res = i;
                break;
            }
        }
    }

    return res;
}

int main()
{
    string haysack;
    getline(cin, haysack);

    string needle;
    getline(cin, needle);
    cout << "First appearance: " << strStr(haysack, needle);
}