/*
==================================================
Problem: [Increment va Decrement]
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

    ll n;
    int q;
    std::cin >> n >> q;

    ll left = 0, right = 0;

    for(int s = 0; s < q; s++)
    {
      int t, x, y;
      std::cin >> t >> x >> y;

      if(t == 1)
      {
        left += y;
      }
      else {
        right -= y;
      }
    }

    std::cout << std::max(abs(left), abs(right));
    return 0;
  }




