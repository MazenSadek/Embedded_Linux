#include <iostream>
#include <csignal>

void signalHandler(int signum) {
    std::cout << "Interrupt signal (" << signum << ") received." << std::endl;
    // Handle the interrupt signal here
    // ...
    exit(signum);
}

int main() {
    // Register signal handler for SIGINT (Ctrl+C)
    signal(SIGINT, signalHandler);

    while (true) {

    std::cout << "Program processing..." <<std::endl;  
        sleep(1);
      }

    return 0;
}
