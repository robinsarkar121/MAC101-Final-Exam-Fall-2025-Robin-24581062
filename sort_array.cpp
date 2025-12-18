/*
 * CS101 Final Exam - File 1: sort_array.cpp
 * The Logic Test: Sorting an Array
 *
 * Student Name: ________________________
 * Date: ________________________
 *
 * OBJECTIVE:
 * Write a program that sorts an array of 100 integers in ascending order.
 *
 * REQUIREMENTS:
 * 1. Create an array of 100 integers (you can initialize it with random or predefined values)
 * 2. Implement a sorting algorithm (Bubble Sort is recommended for simplicity)
 * 3. Display the array before and after sorting
 *
 * HINTS:
 * - You'll need a nested loop (a loop inside another loop)
 * - You'll need to swap two elements when they're in the wrong order
 * - To swap: temp = a; a = b; b = temp;
 *
 * GRADING FOCUS:
 * - Do you understand the sorting logic?
 * - Can you use nested loops correctly?
 * - Does your swap mechanism work?
 */

#include <iostream>
using namespace std;

int main()
{
  // TODO: Declare an array of 100 integers
  // Example: int numbers[100];

  // TODO: Initialize the array with values
  // You can use a loop to fill it with numbers 100 down to 1 (unsorted)
  // Example: for(int i = 0; i < 100; i++) { numbers[i] = 100 - i; }

  // TODO: Display the array BEFORE sorting
  cout << "Array before sorting:" << endl;
  // Hint: Use a loop to print the first 10 elements so we can see the difference

  // TODO: Implement your sorting algorithm here
  // BUBBLE SORT APPROACH:
  // - Outer loop: goes through the array multiple times (think: how many passes do you need?)
  // - Inner loop: compares adjacent elements (compare each pair in the array)
  // - If elements are in wrong order, swap them
  //
  // THINK ABOUT:
  // - What condition determines if two numbers are in the "wrong order"?
  // - How do you compare element at position j with element at position j+1?
  // - What three steps are needed to swap two values? (Hint: you need a temporary variable)
  //
  // STRUCTURE HINT:
  // for(outer loop - controls how many times we pass through) {
  //     for(inner loop - goes through comparing adjacent pairs) {
  //         if(need to swap?) {
  //             // perform the swap using a temp variable
  //         }
  //     }
  // }

  // TODO: Display the array AFTER sorting
  cout << "\nArray after sorting:" << endl;
  // Hint: Print the first 10 elements to verify they're now in order

  return 0;
}
