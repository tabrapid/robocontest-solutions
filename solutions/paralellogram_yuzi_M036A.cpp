/*
==================================================
Problem: [paralellogram yuzi]
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

    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    std::cin >> x3 >> y3;

     std::cout << std::abs((x2 - x1)*(y3 - y1) - (x3 - x1) * (y2 - y1)) << std::endl;

      return 0;
  }

