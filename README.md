# Print-It

A C++ terminal application that simulates and visualizes the low-level execution lifecycle of a binary.

## Core Concept

The project illustrates the step-by-step internal process of running C++ code:
- Preprocessing, AST compilation, and ELF binary linking with dynamic libraries.
- Kernel process loading via `sys_execve`, PCB assignment, and VMA memory mapping.
- C runtime environment initialization (`_start` and `__libc_start_main`).
- Execution of `main()`, I/O buffer flushing, and kernel process cleanup (`sys_exit`).

## Execution

```bash
git clone https://github.com/bilalElGohary/Print_It-.git
cd ~/Print_It-/src
```
```bash
g++ -std=c++11 main.cpp -o print_it && ./print_it
```

## License
This project is licensed under the **[GNU General Public License v3.0](https://www.gnu.org/licenses/gpl-3.0.html)**
