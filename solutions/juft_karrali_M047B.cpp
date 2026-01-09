/*
==================================================
Problem: [Juft karrali]
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

std::string say(int num);

int main()
{
    FAST_IO;

    int num;
    std::cin >> num;

    std::cout << (num % 2 == 0 ? num : num * 2) << std::endl;

    return 0;
}

