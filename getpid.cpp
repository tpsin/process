#include <unistd.h>
#include <iostream>

int main(void)
{
   int number;

   std::cout << "The PID of this process is :" << getpid() << std::endl;

   // These instructions will block the process waiting for input.
   std::cout << "\nInsert a number: " << std::endl;
   std::cin >> number;

   return 0;
}
