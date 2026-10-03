#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <thread>
#include <chrono>

using namespace std;

void clearScreen() {
    std::cout << "\033[2J\033[1;1H";
}

string Check_Box(int waiting_in_sec){
    std::string box_checked = "[  OK  ]";
    std::this_thread::sleep_for(std::chrono::seconds(waiting_in_sec));
    return box_checked;
}

int main(){
    clearScreen();

    std::string print {};
    std::cout << "> Enter anyting: ";   
    std::cin >> print;
    
    // draw a line horzintal in the window 
    std::cout << endl << "Starting Preprocessing Main.Cpp..." << endl;
    std::cout << Check_Box(3) <<"  Starting Preprocessing Main.Cpp..." << endl;
    std::cout << Check_Box(2) << "  Processed #include <iostream> and expanded header directives." << endl << "\tStarting Compilation Phase (C++ AST to Machine Code)..." << endl;
    std::cout << "\t Compiled main.cpp into object code (main.o)." << endl << Check_Box(2) << "  Compiled main.cpp into object code (main.o)." << endl << "\t Starting Linker (Resolving Symbols & Libraries)..." << endl << "\t Linked object code with libstdc++.so and generated ELF binary." << endl << Check_Box(2) << "  Linked object code with libstdc++.so and generated ELF binary." << endl;

    std::cout << "\nStarting Kernel Execve Loader (sys_execve)...\n" << Check_Box(1) << "\tAllocated Process Control Block (PCB) and assigned PID." << endl;
    std::cout << "[  OK  ]\tMapped VMA sections: .text (RX), .data (RW), .bss (RW).\n";
    std::cout << "[  OK  ]\tAllocated process Stack and initial Heap regions." << endl;
    std::cout << "[  OK  ]\tLoaded dynamic linker (/lib64/ld-linux-x86-64.so.2)." << endl;

    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "\nStarting C Runtime Initialization (_start & __libc_start_main)...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "[  OK  ]\tInitialized Stack frame, Environment Variables, and Arguments.\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "[  OK  ]\tConstructed global static objects (std::cout, std::cin, std::cerr).\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "[  OK  ]\tReached Target: C++ Executable Runtime Environment Ready.\n";

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout <<  "\nStarting User Execution Space (int main)...\n";
    std::cout <<  "[  OK  ]\tJumped to entry point address: main().\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    std::cout <<  "[  OK  ]\tExecuted instruction: std::cout << print.\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout <<  "[  OK  ]\tStream buffer flushed and text written to stdout.\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout <<  "[  OK  ]\tReturned exit code 0 from main().\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
     
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout <<" \nStarting C++ Runtime Shutdown & Cleanup...\n";
    std::cout << "[  OK  ]\tExecuted destructors for global/static objects in reverse order.\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "[  OK  ]\tFlushed and closed standard IO file descriptors (0, 1, 2).\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(200));

    std::cout << "\nStarting Kernel Process Termination (sys_exit)...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
    std::cout << "[  OK  ]\tReleased memory pages (Stack, Heap, Data) back to kernel.\n";
    std::cout << "[  OK  ]\tProcess terminated with Exit Code: 0 (SUCCESS).\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(200));

    clearScreen();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "\n> Output: " << print;
}