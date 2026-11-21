# Operating System Lab Assignments

This repository contains the **Operating System Laboratory Programs** completed as part of the Bachelor of Technology in Computer Science and Engineering curriculum at Doon University, Session 2026–2027.

The repository covers fundamental Operating System concepts through practical implementations using **C++ and Linux/UNIX system programming concepts**.

## 📚 List of Experiments

| No. | Experiment | Concepts Covered |
|---|---|---|
| 1 | Process Creation using `fork()`, `exec()` and `wait()` | Linux System Calls, Process Management |
| 2 | Thread Creation using POSIX Threads | Multithreading, Thread Management |
| 3 | CPU Scheduling Algorithms | FCFS, SJF, Priority, Round Robin |
| 4 | Producer-Consumer Problem | Process Synchronization, Semaphores |
| 5 | Readers-Writers Problem | Synchronization, Mutual Exclusion |
| 6 | Dining Philosophers Problem | Semaphores, Deadlock Prevention |
| 7 | Banker's Algorithm | Deadlock Avoidance, Safe State |
| 8 | Contiguous Memory Allocation | First Fit, Best Fit, Worst Fit |
| 9 | Page Replacement Algorithms | FIFO, LRU, Optimal |
| 10 | Disk Scheduling Algorithms | FCFS, SSTF, SCAN, C-SCAN |
| 11 | File Allocation Methods | Contiguous, Linked, Indexed Allocation |

## 🛠️ Technologies Used

- **Programming Language:** C++
- **Operating System:** Linux / Ubuntu
- **Compiler:** GCC / G++
- **Libraries:** POSIX Threads (`pthread`) and POSIX system headers
- **Development Environment:** Linux Terminal / VS Code

## ⚙️ Compilation and Execution

### 1. Clone the Repository

```bash
git clone https://github.com/Adiba101/Operating_System_Assignment.git
```

### 2. Navigate to the Project Directory

```bash
cd Operating_System_Assignment
```

### 3. Compile a Program

For a standard C++ program:

```bash
g++ filename.cpp -o output
```

For programs using POSIX threads:

```bash
g++ filename.cpp -o output -pthread
```

### 4. Execute the Program

```bash
./output
```

**Note:** Programs using Linux-specific system calls such as `fork()`, `exec()` and `wait()` should be compiled and executed in a Linux/UNIX environment.

## 🎯 Learning Outcomes

Through these practical assignments, the following concepts are explored:

- Understanding process creation and process management.
- Implementing multithreading and synchronization.
- Comparing different CPU scheduling algorithms.
- Solving classical synchronization problems using semaphores.
- Understanding and preventing deadlocks.
- Implementing memory allocation strategies.
- Comparing page replacement algorithms.
- Understanding disk scheduling techniques.
- Exploring different file allocation methods.

## 👩‍💻 Author

**Adiba Ansari**

B.Tech – Computer Science and Engineering  
Doon University

## 🎓 Academic Information

- **Course:** Operating System Laboratory
- **Academic Session:** 2026–2027
- **Institution:** Doon University
- **Under the Guidance of:** Ms. Yashvi Uniyal

---

⭐ This repository is maintained for academic learning and practical understanding of Operating System concepts.
