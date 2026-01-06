/*
==================================================
Problem: [Tadqiqotchi Fedya]
Platform: RoboContest
Difficulty: [Easy]
Author: [tabrapid]
Date: [06/01/2026]
Time Complexity: [O(1)]
Space Complexity: [O(1)]
==================================================
*/

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

typedef vector<int> vi;
typedef pair<int, int> pii;

// Funksiya eng katta qiymatni beruvchi (i,j) indeks juftini topadi
pii minmax(vi &nums);

int main()
{
    FAST_IO;

    int n;
    cin >> n;
    vi cities(n);
    for (int i = 0; i < n; i++)
        cin >> cities[i];

    pii res = minmax(cities);

    int i = res.first;
    int j = res.second;

    cout << abs(cities[i] - cities[j]) + abs(i - j) << endl;

    return 0;
}

pii minmax(vi &nums)
{
    int n = nums.size();

    // 1. a[i] + i
    int min1_idx = 0, max1_idx = 0;
    int min1_val = nums[0] + 0;
    int max1_val = nums[0] + 0;

    // 2. a[i] - i
    int min2_idx = 0, max2_idx = 0;
    int min2_val = nums[0] - 0;
    int max2_val = nums[0] - 0;

    for (int i = 0; i < n; i++)
    {
        int val1 = nums[i] + i;
        if (val1 < min1_val)
        {
            min1_val = val1;
            min1_idx = i;
        }
        if (val1 > max1_val)
        {
            max1_val = val1;
            max1_idx = i;
        }

        int val2 = nums[i] - i;
        if (val2 < min2_val)
        {
            min2_val = val2;
            min2_idx = i;
        }
        if (val2 > max2_val)
        {
            max2_val = val2;
            max2_idx = i;
        }
    }

    // Qaysi juft katta farq beradi
    int diff1 = max1_val - min1_val;
    int diff2 = max2_val - min2_val;

    if (diff1 >= diff2)
        return {min1_idx, max1_idx};
    else
        return {min2_idx, max2_idx};
}
