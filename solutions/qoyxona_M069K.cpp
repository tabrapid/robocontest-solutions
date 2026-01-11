/*
==================================================
Problem: [Qo'yxona]
Platform: RoboContest
Difficulty: [Easy]
Author: [tabrapid]
==================================================
*/

#include <bits/stdc++.h> // Competitive programming shortcut
using namespace std;                         //
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

     int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> state(n + 1, 0); // 0=unvisited, 1=visiting, 2=done
    int cycles = 0;

    for (int i = 1; i <= n; i++) {
        if (state[i] != 0) continue;

        int cur = i;
        while (state[cur] == 0) {
            state[cur] = 1;
            cur = a[cur];
        }

        if (state[cur] == 1) {
            // cycle found
            cycles++;
        }

        // mark path as done
        cur = i;
        while (state[cur] == 1) {
            state[cur] = 2;
            cur = a[cur];
        }
    }

    cout << cycles << "\n";   

    return 0;
  }

