/*

Average of Values:
	To get the average of a series of values, you add the values up and then divide the sum by
	the number of values. Write a program that stores the following values in five different
	variables: 28, 32, 37, 24, and 33. The program should first calculate the sum of these five
	variables and store the result in a separate variable named sum. Then, the program
	should divide the sum variable by 5 to get the average. Display the average on the screen.

*/

#include <iostream>
using namespace std;

int main()
{
	short num1 = 28;
	short num2 = 32;
	short num3 = 37;
	short num4 = 24;
	short num5 = 33;
	short sum;

	sum = num1 + num2 + num3 + num4 + num5;

	cout << "The average is " << sum / 5.0 << endl;

	return 0;
}