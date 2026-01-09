/*
==================================================
Problem: [Eng kichik boluvchi]
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

    ll num;
    std::cin >> num;

    std::cout << least_natural_divisor(num) << std::endl;
    
    return 0;
}

ll least_natural_divisor(ll num)
{
  for(int i = 2; i <= std::sqrt(num) + 1; i++)
  {
    if(num % i == 0)
    {
      return i;
    }
  }

  return num;
}
