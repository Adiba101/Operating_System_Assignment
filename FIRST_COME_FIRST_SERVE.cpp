#include<bits\stdc++.h>
using namespace std;
int main() 
{
    int n = 3;
    string p[] = {"P1", "P2", "P3"};
    int at[] = {6, 0, 3};
    int bt[] = {24, 3, 3};
    int ct[3], tat[3], wt[3];
    int order[] = {0, 1, 2};
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (at[order[i]] > at[order[j]]) {
                swap(order[i], order[j]);
            }
        }
    }
    int time = 0;
    for (int i = 0; i < n; i++) 
    {
        int k = order[i];
        if (time < at[k])
            time = at[k];
        time += bt[k];
        ct[k] = time;
        tat[k] = ct[k] - at[k];
        wt[k] = tat[k] - bt[k];
    }
    cout << "Process\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++) {
        cout << p[i] << "\t" << at[i] << "\t"
             << bt[i] << "\t" << ct[i] << "\t"
             << tat[i] << "\t" << wt[i] << "\n";
    }
    return 0;
}
