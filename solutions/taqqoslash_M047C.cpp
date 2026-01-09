/*
==================================================
Problem: [Taqqoslash]
Platform: RoboContest
Author: [tabrapid]
Date: [06/01/2026]
==================================================
*/

#include <bits/stdc++.h> // Competitive programming shortcut

// Optional macros
#define FAST_IO                       \
    std::ios::sync_with_stdio(false); \
    std::cin.tie(nullptr);
#define ALL(v) (v).begin(), (v).end()

// Optional typedefs
typedef long long ll;
typedef std::vector<int> vi;
typedef std::pair<int, int> pii;

ll least_natural_divisor(ll num);

int main()
{
    FAST_IO;

    int a, b, c;
    std::cin >> a >> b >> c;

    std::unordered_set nums = {a, b, c};

    int len = nums.size();

    std::cout << len << '\n';
   
    return 0;
}

