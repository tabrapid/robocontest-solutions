/*
==================================================
Problem: [Musiqaxo'r]
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

    std::vector<int> musics(len);
    for(int i = 0; i < len; i++)
    {
      std::cin >> musics[i];
    }

    std::unordered_set<int> seen;
    int l = 0, max = 0;

    for(int r = 0; r < len; r++)
    {
      while(seen.count(musics[r]))
      {
        seen.erase(musics[l]);
        l++;
      }

      seen.insert(musics[r]);
      max = std::max(max, r - l + 1);
    }

    std::cout << max << std::endl;
    return 0;
  }


