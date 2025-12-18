/*
 * CS101 Final Exam - File 2: bmi_calculator.cpp
 * The Tool Test: BMI Calculator
 *
 * Student Name: Robin Sarkar
 * Date: 12/18/2025
 *
 * OBJECTIVE:
 * Create an interactive program that calculates a user's Body Mass Index (BMI).
 *
 * REQUIREMENTS:
 * 1. Ask the user for their weight in kilograms
 * 2. Ask the user for their height in meters
 * 3. Calculate BMI using the formula: BMI = weight / (height × height)
 * 4. Display the calculated BMI to the user
 * 5. BONUS: Tell the user their BMI category (Underweight, Normal, Overweight, Obese)
 *
 * HINTS:
 * - Use 'double' or 'float' for decimal numbers
 * - Use 'cin' to get input from the user
 * - Use 'cout' to display messages and results
 *
 * BMI CATEGORIES (BONUS):
 * - Underweight: BMI < 18.5
 * - Normal weight: BMI 18.5 - 24.9
 * - Overweight: BMI 25 - 29.9
 * - Obese: BMI >= 30
 *
 * GRADING FOCUS:
 * - Can you get input from the user?
 * - Can you perform the calculation correctly?
 * - Can you display the result in a user-friendly way?
 */

#include <iostream>
using namespace std;

int main()
{
    // declaring varible double for weight, height and bmi since they are double varible type
    double weight, height, bmi;

    // cout welcome message for the user
    cout << "Welcome to the BMI Calculator!" << endl;
    cout << "This calculator will calculate your Body Mass Index." << endl;
    cout << endl;

    // using cout and cin to get user weight in kilogram and saving the data in weight variable
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    // using cout and cin to get user height in meter and saving the data in height variable
    cout << "Enter your height in meters: ";
    cin >> height;

    // using the formula of bmi to calculate the bmi of the user and displaying the result
    bmi = weight / (height * height);
    cout << "\nYour BMI is: " << bmi << endl;

    // using if - else if - else to determine weither the user is underweight/normal weight/overweight/obese
    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    } 
    else if (bmi < 25) {
        cout << "Category: Normal weight" << endl;
    } 
    else if (bmi < 30) {
        cout << "Category: Overweight" << endl;
    } 
    else {
        cout << "Category: Obese" << endl;
    }

    cout << "\nThank you for using the BMI Calculator!" << endl;

    return 0;
}

