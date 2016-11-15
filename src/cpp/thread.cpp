#include <iostream>
#include <thread>

void function1 () {
    std::cout << "Hello world!" << std::endl;
}

int main () {

    std::thread t1(function1);

    // t1.join(); // main waits t1 to finish. This blocks the execution of the thread that calls this function until the function called on construction returns.
    t1.detach(); // t1 will freely on its own. Detaches the thread represented by the object from the calling thread, allowing them to execute independently from each other.

    if(t1.joinable()) {
        t1.join();
    }

    return 0;
}
