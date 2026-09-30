/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {

   const double ANNUAL_RATE = 1.5;
   double year_5 = 5 * ANNUAL_RATE;
   double year_7 = 7 * ANNUAL_RATE;
   double year_10 = 10 * ANNUAL_RATE;
   std::cout << "After 5 years, the ocean will rise " << year_5 << " millimeters.\n";
   std::cout << "After 7 years, the ocean will rise " << year_7 << " millimeters.\n";
   std::cout << "After 10 years, the ocean will rise " << year_10 << " millimeters.\n";
}
