/*
 * CS101 Final Exam - File 1: sort_array.cpp
 * The Logic Test: Sorting an Array
 *
 * Student Name: Robin Sarkar
 * Date: 12/18/2025
 *
 * OBJECTIVE:
 * Write a program that sorts an array of 100 integers in ascending order.
 *
 * REQUIREMENTS:
 * 1. Use the provided array 'numbers' containing integers 1-100 in random order
 * 2. Implement a sorting algorithm (Bubble Sort is recommended for simplicity)
 * 3. Display the array before and after sorting (at least the first 10-20 elements)
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
    // the given unsorted array with a size of 100
    int numbers[100] = {
        63, 12, 89, 45, 23, 78, 34, 91, 56, 7,
        82, 29, 67, 14, 95, 41, 18, 73, 50, 36,
        98, 5, 61, 27, 84, 48, 10, 75, 32, 69,
        21, 58, 93, 15, 80, 44, 3, 70, 37, 96,
        52, 19, 86, 31, 65, 9, 77, 42, 24, 88,
        54, 1, 71, 39, 94, 25, 81, 47, 13, 68,
        35, 99, 59, 22, 85, 46, 11, 74, 30, 97,
        51, 6, 72, 38, 92, 26, 83, 49, 16, 66,
        33, 100, 57, 20, 87, 43, 8, 76, 40, 62,
        28, 90, 55, 17, 79, 4, 64, 2, 53, 60
    };

    // Displaying the array before sorting
    cout << "Array before sorting:" << endl;
    for (int i = 0; i < 100; i++) //the for loops check all the numbers in the array and displays the unsorted numbers using cout
    {
        cout << numbers[i] << " ";//using " " to have gap between the numbers
    }
    cout << endl;

    // using bubble sort method to sort the data in accending order
    for (int i = 0; i < 100-1; i++) // outer loop check the number of passes through the loop and we use 100-1 since the lsat number will be sorted anyways
    {
        // inner loop campares the number in pairs and swaps the adjecent element if they are not in order
        for (int j = 0; j < 100 - i - 1; j++)
        {
            // use if function to check wheither the current element is greater than the next element
            if (numbers[j] > numbers[j + 1])
            {
                // Store the current element in a temporary variable same as we did on class using coffee excercise
                int temp = numbers[j];

                // Move the next element into the current position
                numbers[j] = numbers[j + 1];

                // Place the original current element into the next position
                numbers[j + 1] = temp;
            }
        }
    }

    // Display the sorted array in accending order
    cout << "\nArray after sorting:" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << numbers[i] << " "; //again we use " " to have gaps between the numbers
    }
    cout << endl;

    return 0;
}
