/*
==================================================
Problem: [Quruvchi Xumoy]
Platform: RoboContest
Difficulty: [Easy]
Author: [tabrapid]
Date: [06/01/2026]
Time Complexity: [O(1)]
Space Complexity: [O(1)]
==================================================
*/

#include <bits/stdc++.h> // Competitive programming shortcut
using namespace std;

// Optional macros
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ALL(v) (v).begin(), (v).end()

// Optional typedefs
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll ekub(ll a, ll b);

int main()
{
    FAST_IO;

    ll a, b;

    while (std::cin >> a >> b)
    {
        ll res = 2 * (a / ekub(a, b) + b / ekub(a, b));
        std::cout << res << std::endl;
    }

    return 0;
}

ll ekub(ll a, ll b)
{
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}