For given number n - it is a prime number if it is divisable by any number apart form itself and 1. Example is 25. It is divisable by , 1,5, and 25. Similarly, 12 is divisable by 1,2,3,4,6 and 12. To check any number is prime or not, the better approach is not to check for all possible number (fron 1 to n), rather check for 1 to roo of (n). As after one point all the factors of the numbers are repeated. For an example : 12 - 1 X 12 , 12 X 1 , 3 X 4 , 4 X 3, 2 X 6 ,6 X2. It is better to check for 1 to roo of (12) which near around 3. In a nutshell, rather checking for i = 1 to i = n, we need to check from i = 1 to i \* i = n.

For patterns - Any variable value that is defined inside the outer loop - just before the inner loop, will be reset in every new iteration of inner loop. @00:27:00

https://www.youtube.com/watch?v=rga_q2N7vU8&list=PLfqMhTWNBTe137I_EPQd34TsgV6IO55pt&index=5

To keep that variable value not reset on every new iteration of inner loop, make it global variable.

- In patterns , if the space is at the beginning, we need to print them, but at the end onces are not.
- Hollow Diamond

In C++ , defining a variable without assigning an inital value will be result into the variable getting any garbage value from the memory that was present at the address that variable is holding. It is important to assign right value at the declaration of the variable.

The left shift in memory is done as (when we perform a << b ) answer = a \* 2 power b.

Similary, the right shift is (when we do a >> b) is answer = a / 2 power of b.

int smallest = INT_MAX;

Arrays are passed by reference by default. - all the operations are directly performed on the original array and its elements, no duplicated copy is created. In Cpp, reference is ADDRESS.

Use of sizeof(array) with main() is fine as it will intepret it as a 4 Byte values, and for the for loop sizeof(array)/sizeof(int) - 1 will be the right condition for the array size. But using the same with explecite function will create a problem, as sizeof(array) will be the pointer/address/reference and it will have a different size as per the system config.

ARRAYS - fix sized

VECTORS - dynamic sized

#include `<vector> : is for basic vector ops.`

There are two stages : 1. Compile time 2. Execution time / Run time

- The static memory allocation happens at the compile time. Arrays
  - It is created using stack memory.
- The Dynamic memory allocation happends at the run time or execution time. Vectors, that is why vectors are dynamic
  - It happens inside the heap memory.

Every time when we add an element to the vector, the twice size of the current array(yes vectors are basically arrays on steroids) is created and new element is added. The old one is removed from the memory.

A Vector can have different size and capacity. It can have 3 elements at the moment but because for each new element added , the capacity gets dubbled, it can have extra capacity to hold elements. The capacity is doubled when the current capacity is full and new elements need to be added. Not on every addition the capacity is doubled.

n XOR n is 0

1 XOR 1 is 0

0 XOR 0 is 0

1 XOR 0 is 1

0 XOR 1 is 1

THE WAY TO SOLVE A QUESTION THAT IS ABOUT UNIQUE ELEMENTS IS can be XOR. Example : Leetcode 136

The limitation with XOR in question 136 is if the vector has any element 3 times or odd number of time then it will only cancel out even numbers and one of the element will be remained in the list.
