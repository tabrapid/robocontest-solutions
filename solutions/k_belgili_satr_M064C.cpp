/*
==================================================
Problem: [K belgili satr]
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

int main()
{
    FAST_IO;

    int len;
    std::cin >> len;

    std::string text;
    std::cin >> text;

    if(text.length() > len)
    {
      std::cout << text.substr(0, len) + "...";
    }
    else {
      std::cout << text;
    }

    return 0;
  }




