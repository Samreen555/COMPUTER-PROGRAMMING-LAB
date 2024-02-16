/* program to swap two numbers
#include<iostream>
using namespace std;
int num1, num2;   //global variables
int promptandread();   // takes the numbers user the users
void swap(int a, int b);  // swap the values of the entered numbers
int main ()
{
	 num1 = promptandread();  //function call
	 num2 = promptandread();    //function call
	if (num1 > num2) 
	{
		swap(num1, num2);  //function call
	}
	cout << num1 << " "<< num2 << endl;
	system("pause");  
	return 0;
}
int promptandread() {
	int a;
	cout << "ENTER THE NUMBERS:";
	cin >> a;
	return a;
}
void swap(int a, int b) {
	int temp;
	temp = a; // stores the valsue of a 
	a = b;   // now stores the value of b
	b = a;  // stores the value of a
	num1 = a;
	num2 = temp;
}
#include<iostream>
using namespace std;

int main() {
	int result = 0, user_input;
	cout << "INPUT VALUE:";
	cin >> user_input;
	if (user_input < 0) {
		result = -1;
		cout << result;
	}
	else if (user_input >= 0 && user_input <= 5) {
		cout << result;
	}
	else if (user_input >= 6 && user_input <= 12) {
		result = 1;
		cout << result;
	}
	else if (user_input >= 13 && user_input <= 19) {
		result = 2;
		cout << result;
	}
	else if (user_input >= 20 && user_input <= 50) {
		result = 3;
		cout << result;
	}
	else if (user_input >= 51 && user_input <= 60) {
		result = 4;
		cout << result;
	}
	else if (user_input >= 61 && user_input <= 101) {
		result = 5;
		cout << result;
	}
	else
		cout << "INVALID NUMBER";

}
#include<iostream>
#include<string>
using namespace std;
// Create a structure variable called myStructure
struct {
	int myNum;
	string myString;
} myStructure1,myStructure2;
int main()
{
	// Assign values to members of myStructure
	myStructure1.myNum = 1;
	myStructure1.myString = "Hello World!";
	myStructure2.myNum = 5;
	myStructure2.myString ="MY NAME SAMREEN FARHAT";
	// Print members of myStructure
	cout << myStructure1.myNum << "\n";
	cout << myStructure1.myString << "\n";
	cout << myStructure2.myNum << "\n";
	cout << myStructure2.myString << "\n";
	return 0;
}
#include<iostream>
#include<string>
using namespace std;
struct {
	string brand;
	string model;
	int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here
int main()
{
	// Put data into the first structure
	myCar1.brand = "BMW";
	myCar1.model = "X5";
	myCar1.year = 1999;
	// Put data into the second structure
	myCar2.brand = "Ford";
	myCar2.model = "Mustang";
	myCar2.year = 1969;
	// Print the structure members
	cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
	cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

	return 0;
}
#include <iostream>
#include<iomanip>
using namespace std;
void main()
{
	int x[5], index;
	cout << "Please enter five integer values :";
	for (index = 0; index < 5; index++)
		cin >> x[index];
	cout << "The values in reverse order are :";
	for (index = 4; index >= 0; index--)
		cout << setw(3) << x[index];
	cout << endl;
}*/

