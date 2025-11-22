#include <iostream>

using namespace std;
typedef unsigned short u16;

struct Day {
    u16 minTime;
    u16 maxTime;
    u16 optTime;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u16 d, sumTime, maxSumTime=0, minSumTime=0;
    cin >> d >> sumTime;

    Day days[d];

    for (u16 i = 0; i < d; i++) {
        cin >> days[i].minTime >> days[i].maxTime;
        maxSumTime += days[i].maxTime;
        minSumTime += days[i].minTime;
        days[i].optTime = days[i].minTime;
    }

    if (minSumTime > sumTime || maxSumTime < sumTime) {
        cout << "NO";
        return 0;
    }

    cout << "YES\n";

    for (u16 i = 0; i < d; i++) {
        while (days[i].optTime < days[i].maxTime && minSumTime < sumTime) {
            days[i].optTime++;
            minSumTime++;
        }
        cout << days[i].optTime << " ";
    }

    return 0;
}