/*
==================================================
Problem: [Yig'indi]
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

    ll res = 0;

    if(num < 0)
    {
      res = ((1 + num)) * (std::abs(num) + 2) / 2;
    }
    else if (num == 0)
    {
      res = 1;  
    }
      
    else 
    {
      res = ((1 + num)) * num / 2;
    }

    std::cout << res << std::endl;

    return 0;
}

