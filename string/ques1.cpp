#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else if ((st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') || (st.top() == '[' && s[i] == ']'))
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (st.empty())
        return true;
    else
        return false;
}

int main()
{
    string s;
    cin >> s;

    if(isValid(s))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}