/*
==================================================
Problem: [Sakarashlar soni]
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

    long long X;
    std::cin >> X;
    X = llabs(X);

    long long sum = 0;
    long long k = 0;

    while (sum < X || (sum - X) % 2 != 0) {
        k++;
        sum += k;
    }

    std::cout << k;

    return 0;
  }


