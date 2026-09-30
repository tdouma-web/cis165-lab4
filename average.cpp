/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main() {

   double one = 28;
   double two = 32;
   double three = 37;
   double four = 24;
   double five = 33;
   
   double sum = one + two + three + four + five;
   double average = sum / 5;
   
   std::cout << "The sum is " << sum << " the average is " << average;
    return 0;
}
