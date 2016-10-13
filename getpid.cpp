#include <unistd.h>
#include <iostream>

int main(void)
{
   int number;

   std::cout << "The PID of this process is :" << getpid() << std::endl;
   std::cout << "\nInsert a number: " << std::endl;
   // The folloeing instruction will block the process waiting for input.
   std::cin >> number;

   return 0;
}
