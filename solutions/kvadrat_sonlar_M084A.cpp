/*
==================================================
Problem: [Kvadrat sonlar]
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

    ll num;
    std::cin >> num;

    num = sqrt(num);

    for(int i = 1; i <= num; i++)
    {
      std::cout << i * i << ' ';
    }
   
    return 0;
  }





