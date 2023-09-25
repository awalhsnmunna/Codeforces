
// Question: https://codeforces.com/problemset/problem/282/A  //


#include <bits/stdc++.h>
using namespace std;

void solve(int &x)
{
    string s;
    getline(cin, s);
    if (s == "X++" || s == "++X")
    {
        x++;
    }
    else
    {
        x--;
    }
}

int main()
{
    int t, x = 0;
    cin >> t;
    getchar();

    while (t--)
    {
        solve(x);
    }

    cout << x;
    return 0;
}
