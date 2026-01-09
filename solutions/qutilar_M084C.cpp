/*
==================================================
Problem: [Qutilar]
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

    std::vector<int> box1(3), box2(3);

    for(int i = 0; i < 3; i++)
    {
      std::cin >> box1[i];
    }
    for(int i = 0; i < 3; i++)
    {
      std::cin >> box2[i];
    }

    std::sort(box1.begin(), box1.end());
    std::sort(box2.begin(), box2.end());

    if(box1 == box2)
    {
      std::cout << "Qutilar o'zaro teng" << std::endl;
    }
    else if ((box1[0] >= box2[0]) && (box1[1] >= box2[1]) && (box1[2] >= box2[2])) {
      std::cout << "Birinchi quti ikkinchisidan katta" << std::endl;
    }
    else if ((box1[0] <= box2[0]) && (box1[1] <= box2[1]) && (box1[2] <= box2[2])) {
      std::cout << "Birinchi quti ikkinchisidan kichik" << std::endl;
    }
    else {
      std::cout << "Qutilarni solishtirib bo'lmaydi" << std::endl;
    }


    
    return 0;
  }




