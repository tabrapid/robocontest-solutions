/*
==================================================
Problem: [Oshib borish]
Platform: RoboContest
Difficulty: [Easy]
Author: [tabrapid]
Date: [06/01/2026]
Time Complexity: [O(n)]
Space Complexity: [O(n)]
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

bool is_there_repetition(vi &nums, int length);

int main()
{
    FAST_IO;

    int t;
    std::cin >> t;

    while (t--)
    {
        int length;
        std::cin >> length;

        vi nums(length);
        for (int i = 0; i < length; i++)
        {
            std::cin >> nums[i];
        }

        if (is_there_repetition(nums, length))
        {
            std::cout << "NO" << std::endl;
        }
        else
        {
            std::cout << "YES" << std::endl;
        }
    }

    return 0;
}

bool is_there_repetition(vi &nums, int length)
{
    std::unordered_set<int> seen;
    seen.reserve(length);

    for (int i = 0; i < length; i++)
    {
        if (seen.count(nums[i]))
        {
            return 1;
        }
        else
        {
            seen.insert(nums[i]);
        }
    }

    return 0;
}
