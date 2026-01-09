/*
==================================================
Problem: [Operatsiyalar soni]
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

    ll a, b;
    std::cin >> a >> b;

    ll ops = 0;

    while(a > 0 && b > 0)
    {
      if(a < b)
      {
        std::swap(a, b);
      }

      ops += a / b;
      a = a % b;
    }

    std::cout << ops << std::endl;
 
    return 0;
  }


