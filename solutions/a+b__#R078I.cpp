/*
==================================================
Problem: [a+b__#R078I]
Platform: RoboContest
Difficulty: [Easy]
Author: [tabrapid]
Date: [06/01/2026]
Idea / Approach:
- [Just adding two numbers]
- [Using cpp's standart input/output library]

Time Complexity: [O(1)]
Space Complexity: [O(1)]
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

int main()
{
    FAST_IO;

    int a, b;
    std::cin >> a >> b;

    std::cout << a + b << std::endl;

    return 0;
}
