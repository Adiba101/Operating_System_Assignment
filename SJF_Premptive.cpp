#include <iostream>
using namespace std;
int main() 
{
    int n = 4;
    string p[] = {"A", "B", "C", "D"};
    int at[] = {0, 1, 2, 3};
    int bt[] = {8, 4, 9, 5};
    int rem[] = {8, 4, 9, 5};
    int ct[4], tat[4], wt[4];
    int time = 0, completed = 0;
    double totalTAT = 0, totalWT = 0;
    while (completed < n) 
    {
        int idx = -1;
        for (int i = 0; i < n; i++) 
        {
            if (at[i] <= time && rem[i] > 0) 
            {
                if (idx == -1 || rem[i] < rem[idx])
                    idx = i;
            }
        }
        if (idx == -1) 
        {
            time++;
            continue;
        }
        rem[idx]--;
        time++;
        if (rem[idx] == 0) 
        {
            ct[idx] = time;
            completed++;
        }
    }
    cout << "Process\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++) 
    {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        totalTAT += tat[i];
        totalWT += wt[i];
        cout << p[i] << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << "\n";
    }
    return 0;
}