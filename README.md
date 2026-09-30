# CIS-165 Lab 4

*Name:* Theo Douma    *Section:* CIS-165-W099

## Initial Plans

*average.cpp:* I will store five values (28, 32, 37, 24, 33) in double variables, add them together into a sum variable, divide the sum by 5 to find the average, and display both results. 
*ocean_levels.cpp:* I will store a 1.5 annual rate in a named constant, multiply it by 5, 7, and 10 years, store each calculation in a result variable, and display the expected rises with units.

## Run Instructions

1. Go to onlinegdb.com (C++).
2. Paste the code from either file into the editor.
3. Click "Run" at the top to see the output.


## Test Table

| *Program* | *Values used* | *Expected result* | *Actual output* | *Match* |
| ----- | ----- | ----- | ----- | ----- |
| average.cpp (assigned) | 28, 32, 37, 24, 33 | Sum: 154, Avg: 30.8 | [Insert Actual] | [Insert Match] |
| average.cpp (changed) | 10, 15, 20, 25, 33 | Sum: 103, Avg: 20.6 | [Insert Actual] | [Insert Match] |
| ocean_levels.cpp (assigned) | 1.5 rate | 5yr: 7.5, 7yr: 10.5, 10yr: 15 | 5yr: 7.5, 7yr: 10.5, 10yr: 15 | Yes 
| ocean_levels.cpp (changed) | 2.5 rate | 5yr: 12.5, 7yr: 17.5, 10yr: 25 | 5yr: 12.5, 7yr: 17.5, 10yr: 25 | yes |



## Explanations

*average.cpp:* The five values and the average use the double data type to allow for fractional decimal values and prevent the average from being cut off to an integer. The assigned values (28, 32, 37, 24, 33) are first added together to create a total sum of 154, which is then divided by 5 to calculate an average of 30.8. The calculation must divide the completed sum because of the order of operations; dividing without adding everything first would only divide the final value by 5, giving an incorrect result. 

*ocean_levels.cpp:* The calculations multiply the constant annual rate of rise (1.5 mm) by the number of years (5, 7, and 10) to find the total cumulative rise for each period. The annual rate is a good candidate for a named constant because it is a fixed value that does not change during execution, making the code safer and easier to read. The assignment requires calculations to be stored in variables before using `cout` to make the code cleaner, easier to debug, and to allow the calculated values to be reused later if needed.
