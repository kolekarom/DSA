#include <stdio.h>

struct Process {
    int pid;        // Process ID
    int arrival;    // Arrival time
    int burst;      // Burst time
    int remaining;  // Remaining burst time
    int completion; // Completion time
};

int findShortestProcess(struct Process processes[], int n, int currentTime) {
    int minRemainingTime = 1e9;
    int shortestProcess = -1;
    
    for (int i = 0; i < n; i++) {
        if (processes[i].arrival <= currentTime && processes[i].remaining > 0 && processes[i].remaining < minRemainingTime) {
            minRemainingTime = processes[i].remaining;
            shortestProcess = i;
        }
    }
    
    return shortestProcess;
}

void sjfPreemptive(struct Process processes[], int n) {
    int currentTime = 0;
    int completedProcesses = 0;
    int waitingTime = 0, turnaroundTime = 0;
    
    while (completedProcesses < n) {
        int shortestProcess = findShortestProcess(processes, n, currentTime);

        if (shortestProcess == -1) {
            currentTime++;
            continue;
        }

        // Execute the process for 1 unit of time
        processes[shortestProcess].remaining--;
        currentTime++;

        // If the process is completed
        if (processes[shortestProcess].remaining == 0) {
            completedProcesses++;
            processes[shortestProcess].completion = currentTime;

            int tat = processes[shortestProcess].completion - processes[shortestProcess].arrival;
            int wt = tat - processes[shortestProcess].burst;

            waitingTime += wt;
            turnaroundTime += tat;
        }
    }

    printf("\nPID\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\n");
    for (int i = 0; i < n; i++) {
        int tat = processes[i].completion - processes[i].arrival;
        int wt = tat - processes[i].burst;
        printf("%d\t%d\t%d\t%d\t\t%d\t\t%d\n", processes[i].pid, processes[i].arrival, processes[i].burst,
               processes[i].completion, tat, wt);
    }

    printf("\nAverage Waiting Time: %.2f", (float)waitingTime / n);
    printf("\nAverage Turnaround Time: %.2f\n", (float)turnaroundTime / n);
}

int main() {
    int n;
    struct Process processes[10];

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        processes[i].pid = i + 1;
        printf("Enter arrival time and burst time for process %d: ", i + 1);
        scanf("%d %d", &processes[i].arrival, &processes[i].burst);
        processes[i].remaining = processes[i].burst; // Initialize remaining burst time
    }

    sjfPreemptive(processes, n);

    return 0;
}
