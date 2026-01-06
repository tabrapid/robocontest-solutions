/*
==================================================
Problem: [Asilbek yo'qotgan son]
Platform: RoboContest
Difficulty: [Easy]
Author: [tabrapid]
Date: [06/01/2026]
Time Complexity: [O(1)]
Space Complexity: [O(1)]
==================================================
*/

// Yechim --> tenlamani ishlab chiqsak a = -b ekanligini bilib olamiz!

#include <bits/stdc++.h> // Competitive programming shortcut
using namespace std;

// Optional macros
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ALL(v) (v).begin(), (v).end()

// Optional typedefs
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main()
{
    FAST_IO;

    ll a;
    std::cin >> a;

    std::cout << a * (-1) << std::endl;

    return 0;
}
