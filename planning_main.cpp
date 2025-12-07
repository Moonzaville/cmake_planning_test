#include <iostream>
#include "process.h"
using std::cout, std::endl;

int main() {
   cout<< "Starting planning main..." << endl;
   Process pro;
   pro.planProcess();
   cout<< "Finished planning main..." << endl;

   return 0;
}